/*#include <iostream>
#include <cmath>
#include" HashTable.h"
#define Size 43
using namespace std;

bool HashTable::add(Key key, Item item){
		if(isduplicated(key) | isfull()) return false;
		bool flag = true;
		int index = hash(key);
		int ifind =index;
		do{
			if(isempty(ifind)){
				datapool[ifind].item = item;
				datapool[ifind].key = key;
				mask[ifind] = true;
				flag = false;
//				cout << "item = " << datapool[ifind].item << "\tkey = " << datapool[ifind].key << "\t" << ifind << "\t: "  << index << endl;
			}
			ifind = ++ifind  % Size;
		}while(flag && ifind != index );
		return true;
}
	
Item HashTable::get(Key key){
		int index = hash(key);
		int ifind =index;
		while( !isempty(ifind) && index--){
			if(datapool[ifind].key.compare(key) == 0){
//				cout << "string compare " << datapool[ifind].key << " \t<-> " << key << " -> \t" << datapool[ifind].key.compare(key) << endl;
				return datapool[ifind].item;
			}
			ifind = ++ifind  % Size;
		}
        cout << "ERROR " << datapool[ifind].key << " \t<-> " << key << " -> \t" << datapool[ifind].key.compare(key) << endl;
	    return 0;
}

void HashTable::show(){
		for(int i = 0;i < Size;i++){
			if(!isempty(i)){
				cout <<  "hash :" << hash(datapool[i].key) << "index = " << i << "  -> " << datapool[i].key << " \t"  << datapool[i].item << endl;
			}
		}
}

int HashTable::hash(string key){
		int index = 1431655765;
		for(int i = key.length() - 1;i >= 0;i--){
			index ^= key[i] >> i;
		}
		return  (index % divisor);
	}

bool HashTable::isempty(int index){return !mask[index];}

bool HashTable::isduplicated(Key data){return false;}

bool HashTable::isfull(){return false;}
*/
