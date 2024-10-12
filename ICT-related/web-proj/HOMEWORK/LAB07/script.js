/**
Name: Rafay Siddiqui
Class: BAI-1A
Roll No : 24K-0009
 */

let index = 0;
let j = 0;

function addItem(item) {
    shoppingList.push(item);
}

function popItem() {
    shoppingList.pop();
}

// will remove ALL instances of the provided string from the the list
function removeMember(item) {
    for (let index = 0; index < shoppingList.length; index++) {
        if (item == shoppingList[index]) {
            // from [1 2 3 4 5 6]
            // to   [1 3 4 5 6]
            // for this 2 has to be replaced by arr[2] which is 3
            // for this loop has to run 

            for (let j = index; j < (shoppingList.length-1); j++) {
                shoppingList[j] = shoppingList[j+1];
                
            }
            popItem();
        }
        
    }
}
// removes only the item present at the index provided
function removeItem(i) {
    for (let index = i; index < shoppingList.length; index++) {
        shoppingList[index] = shoppingList[index+1];
        
    }
    // to reduce the length of the array
    popItem();
}

function displayItems() {
    for (let index = 0; index < shoppingList.length; index++) {
        console.log((index)+": "+shoppingList[index]);
    }
}

function clearList() {
    shoppingList = [];
}


/*
var shoppingList = [ ];
addItem("sleep");
addItem("wake up");
addItem("warmup");
addItem("shower");
addItem("breakfast");
addItem("think");
addItem("dress up");
addItem("warmup");
addItem("drive");
addItem("work");
addItem("leave");
addItem("gym");
addItem("sleep");

displayItems();
console.log("");
//removeMember("warmup");
removeItem(2);
displayItems();
 */

var shoppingList = [ ];

addItem("Apples");
addItem("Bread");
addItem("Milk");
displayItems();
removeItem(1); // Remove Bread
displayItems();
clearList();