package entity.group;

//Local
import entity.element.Entity;

//Kha
import kha.graphics2.Graphics;

// typedef Group = TypedGroup<Entity>;

class TypedGroup<T: Entity> implements IEntity {
	public var name    = "Group";
	
	public var active  = true;
	public var visible = true;
	public var alive   = true;
	
	public var members(default, null):Array<T>;

	public function new(?groupName: String) {
		if (groupName != null)
			name = groupName;

		members = [];
	}

	public function add(entity: T){
		if (entity == null){
			trace("Add obj not be null");
			return;
		}

		if (members.indexOf(entity) >= 0){
			trace("Object exist yje"); //TODO learn english
			return;
		}

		var index = getFirstNull();
		if (index != -1){
			members[index] = entity;
			return;
		}

		members.push(entity);
	
	}
	public function remove(entity: T, splice: Bool = false) {
		if (members == null) return;

		var index = members.indexOf(entity);
		if (index < 0) return;

		if (splice){
			members.splice(index, 1);
		} else 
			members[index] = null;

	}

	public function recycle(){
		//TODO Auto Pool	
	}



	public function draw(gr: Graphics){
		for (entity in members){
			if (entity != null && entity.visible)
				entity.draw(gr);
		}
	}

	public function update(dt: Float){
		for (entity in members){
			if (entity != null && entity.active)
				entity.update(dt);
		}
	}
	public function destroy(){
		if (members == null) return;
		
		for (entity in members){
			if (entity == null) continue;
				
			entity.destroy();
		}
			
		members = [];

	}

	public function kill() {

	}
	public function revive(){

	}
	
	private function getFirstNull():Int{		
		for(i in 0...members.length){
			if (members[i] == null)
				return i;
		}
		
		return -1;
	} 
}