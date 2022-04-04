console.log("ashuis")

var namee = "var ashiush";
console.log(namee);

let name = "let ashush";
console.log(name);
const name1 = "const asjajas";
 console.log(name1)
 

 namee = "var new update ";
 console.log(namee);

 naem = "ashushahasu";
 console.log(naem);


 var onj = {
        name: "ashish",
        class: 10,
        age: 20,
        addres: "House no 1185 a maruti kunj",
        bank_detail: {
            num: 95777744,
            Account: "Saving",
            Name: "Satsih kumar",
            Addres: "Gurgaon 99888",
        },

 }

 console.log(onj.addres)
 console.log(onj.name)
 console.log(onj.class)
 console.log(Object.values(onj))
//  console.log(onj.bank_detail)


// arrrays --



var Myarrays  = ["ashish",1,"New name",2];
console.log(Myarrays[0]);
var i=0;
while(i<Myarrays.length)
{
    console.log(Myarrays[i]);
    i++;
}

function MyNUmber(){
    console.log("hi in function");
}
MyNUmber();
function MyNUmbers(Numw, idexx){

    console.log(Numw);
    console.log(idexx);

    return ("new valuse is retuwn");


}

var newfun = MyNUmbers("ashish", 98889);

console.log(newfun+"  kkss")


function a() {

    console.log("a function ");

}

console.log("ASHUHSU".endsWith())


function change() {
    console.log("call");
    document.getElementById("ss").innerHTML="helklo"
    
}




const cfactory = [
    {name:"google", catagory: "Product", start: 1990,end:20000},
    {name:"microsoft", catagory: "Product", start: 1290,end:1900},
    {name:"amazone", catagory: "service", start: 10920,end:63552},
    {name:"zomato", catagory: "big bang", start: 44,end:23232}
];

const age  = [12,32,45,7,8,23,45,23,87,6,32];

// for(var i=0; i<cfactory.length;i++)
// {
//     console.log(cfactory[i])


// }
cfactory.forEach((element, index)=> {
    console.log(element)
})


for(var i=0; i<age.length;i++)
{
    if(age[i]>=20){
    console.log(age[i])
    }
}

const agee = age.filter((ages) => {
    if(ages>=20){
       return true;
    }
    console.log(ages+ "filter")
})

console.log(agee)






const newCommp = cfactory.filter((com) => {
    if(com.catagory === "Product")
    {
        return true;
    }
});

const com  = cfactory.filter(coms => coms.catagory === "Product")

console.log(newCommp)


// MAP-----------------

cfactory.map((company, index) => {
    console.log(company, index)
    console.log(`${company.name}`)
})

cfactory.reduce()









































































