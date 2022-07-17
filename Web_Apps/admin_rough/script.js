import {foodItem} from './fooditem.js'



function displayItems(){
    var biryani= document.getElementById('biryani');
    var paneer=  document.getElementById('paneer');;
    var chicken=  document.getElementById('chicken');
    var vegetable=  document.getElementById('vegetable');
    var chinese=  document.getElementById('chinese');
    var southIndian=  document.getElementById('south-indian');

    

    const biryaniData= foodItem.filter((item)=>item.category=='biryani');
    const chickenData= foodItem.filter((item)=>item.category=='chicken');
    const PaneerData= foodItem.filter((item)=>item.category=='paneer');
    const vegetableData= foodItem.filter((item)=>item.category=='vegetable');
    const chineseData= foodItem.filter((item)=>item.category=='chinese');
    const southData= foodItem.filter((item)=>item.category=='south indian');
    biryaniData.map(item=>{
        
        var itemCard= document.createElement('div');
        itemCard.setAttribute('id','item-card')

        var cardTop= document.createElement('div');
        cardTop.setAttribute('id','card-top');
        // cardTop.setAttribute('class','trying-out');


        var cart= document.createElement('i');
        cart.setAttribute('class','fa fa-shopping-cart add-to-cart');
        cart.setAttribute('id',item.id);
        cart.setAttribute(onclick,addToCart());

        cardTop.appendChild(cart);

        var del_item=document.createElement('i');
        del_item.setAttribute('class','uil uil-trash-alt del-item');
        del_item.setAttribute('id','del_item_id');
        // del_item.setAttribute('id',item.id)
        cardTop.appendChild(del_item);

        

        var img= document.createElement('img');
        img.src=item.img;

        var itemName= document.createElement('p');
        itemName.setAttribute('id','item-name');
        itemName.innerText= item.name;

        var itemPrice= document.createElement('p');
        itemPrice.setAttribute('id','item-price');
        itemPrice.innerText= 'Price : ₹ ' + item.price;

        itemCard.appendChild(cardTop);
        itemCard.appendChild(img);
        itemCard.appendChild(itemName);
        itemCard.appendChild(itemPrice);

        biryani.appendChild(itemCard);
        
    })

 

    chickenData.map(item=>{
        var itemCard= document.createElement('div');
        itemCard.setAttribute('id','item-card')

        var cardTop= document.createElement('div');
        cardTop.setAttribute('id','card-top');


        var cart= document.createElement('i');
        cart.setAttribute('class','fa fa-shopping-cart add-to-cart');
        cart.setAttribute('id',item.id)

        cardTop.appendChild(cart);


        var img= document.createElement('img');
        img.src=item.img;

        var itemName= document.createElement('p');
        itemName.setAttribute('id','item-name');
        itemName.innerText= item.name;

        var itemPrice= document.createElement('p');
        itemPrice.setAttribute('id','item-price');
        itemPrice.innerText= 'Price : ₹ ' + item.price;

        itemCard.appendChild(cardTop);
        itemCard.appendChild(img);
        itemCard.appendChild(itemName);
        itemCard.appendChild(itemPrice);
        
        chicken.appendChild(itemCard)

    })

    PaneerData.map(item=>{
        var itemCard= document.createElement('div');
        itemCard.setAttribute('id','item-card')

        var cardTop= document.createElement('div');
        cardTop.setAttribute('id','card-top');


        var cart= document.createElement('i');
        cart.setAttribute('class','fa fa-shopping-cart add-to-cart');
        cart.setAttribute('id',item.id)

        cardTop.appendChild(cart);


        var img= document.createElement('img');
        img.src=item.img;

        var itemName= document.createElement('p');
        itemName.setAttribute('id','item-name');
        itemName.innerText= item.name;

        var itemPrice= document.createElement('p');
        itemPrice.setAttribute('id','item-price');
        itemPrice.innerText= 'Price : ₹ ' + item.price;

        itemCard.appendChild(cardTop);
        itemCard.appendChild(img);
        itemCard.appendChild(itemName);
        itemCard.appendChild(itemPrice);
        
        paneer.appendChild(itemCard)

    })

    vegetableData.map(item=>{
        var itemCard= document.createElement('div');
        itemCard.setAttribute('id','item-card')

        var cardTop= document.createElement('div');
        cardTop.setAttribute('id','card-top');

        var cart= document.createElement('i');
        cart.setAttribute('class','fa fa-shopping-cart add-to-cart');
        cart.setAttribute('id',item.id)

        cardTop.appendChild(cart);


        var img= document.createElement('img');
        img.src=item.img;

        var itemName= document.createElement('p');
        itemName.setAttribute('id','item-name');
        itemName.innerText= item.name;

        var itemPrice= document.createElement('p');
        itemPrice.setAttribute('id','item-price');
        itemPrice.innerText= 'Price : ₹ ' + item.price;

        itemCard.appendChild(cardTop);
        itemCard.appendChild(img);
        itemCard.appendChild(itemName);
        itemCard.appendChild(itemPrice);

        
        vegetable.appendChild(itemCard)
    
    })

    chineseData.map(item=>{
        var itemCard= document.createElement('div');
        itemCard.setAttribute('id','item-card')

        var cardTop= document.createElement('div');
        cardTop.setAttribute('id','card-top');


        var cart= document.createElement('i');
        cart.setAttribute('class','fa fa-shopping-cart add-to-cart');
        cart.setAttribute('id',item.id)

        cardTop.appendChild(cart);


        var img= document.createElement('img');
        img.src=item.img;

        var itemName= document.createElement('p');
        itemName.setAttribute('id','item-name');
        itemName.innerText= item.name;

        var itemPrice= document.createElement('p');
        itemPrice.setAttribute('id','item-price');
        itemPrice.innerText= 'Price : ₹ ' + item.price;

        itemCard.appendChild(cardTop);
        itemCard.appendChild(img);
        itemCard.appendChild(itemName);
        itemCard.appendChild(itemPrice);

        
        chinese.appendChild(itemCard)
        
    })

    southData.map(item=>{
        var itemCard= document.createElement('div');
        itemCard.setAttribute('id','item-card')

        var cardTop= document.createElement('div');
        cardTop.setAttribute('id','card-top');


        var cart= document.createElement('i');
        cart.setAttribute('class','fa fa-shopping-cart add-to-cart');
        cart.setAttribute('id',item.id)

        cardTop.appendChild(cart);


        var img= document.createElement('img');
        img.src=item.img;

        var itemName= document.createElement('p');
        itemName.setAttribute('id','item-name');
        itemName.innerText= item.name;

        var itemPrice= document.createElement('p');
        itemPrice.setAttribute('id','item-price');
        itemPrice.innerText= 'Price : ₹ ' + item.price;

        itemCard.appendChild(cardTop);
        itemCard.appendChild(img);
        itemCard.appendChild(itemName);
        itemCard.appendChild(itemPrice);

        southIndian.appendChild(itemCard)

    })
}
displayItems();

// document.getElementById('biryani').addEventListener('click',function(e){
//     console.log('Clicked');
// })

var cartData= [];

function addToCart(){
    console.log('Cart_clicked');
}

function del(){
    console.log('Deleted');
}

document.querySelectorAll('.add-to-cart').forEach(item=>{
    item.addEventListener('click',addToCart);
})

document.querySelectorAll('.del-item').forEach(item=>{
    item.addEventListener('click',del);
})
