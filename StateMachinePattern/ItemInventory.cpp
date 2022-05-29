#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
using namespace lld{
    class ItemInventory{
        private:
        unordered_map<Item,int> items = new unordered_map<Item,int>();
        public:
        void addItem(Item item){
             this.items[item]++;
        }

        void deductItem(Item item){
            int existingItem = items[item];
            if(existingItem != 0){
                items[item]--;
            }
        }
        boolean isItemAvailable(Item item){
            return items[item] != null;
        }
    }
    };
};