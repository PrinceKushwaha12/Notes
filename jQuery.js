// what is jQuery ?
// ans = jQuery is a library of javascript. it is use to simplify the javascript code more and more
// declair jQuery 
// use $ and jQuery 
document.getElementById() = $("selecter")
$("selector");
jQuery("selector")

// check jQuery 
$("document").ready(function(){
    // something here
});

// change text in using jQuery 
$("selecter").text("something here");

// change html element and text using jQuery
$("selecter").html("<html-tag> something here </html-close-tag>");

// change style using jQuery
$("selecter").css("properties-name", "value");

// Ex :- 
$("selecter").css("color", "white");

// change attributes using jQuery 
$("selecter").attr("attribute name") // this is return attribute
$("selecter").attr("attribute name", "value") // this is assign attribute

// Ex :-
$("selecter").attr("href", "https://www.google.com");

// add css class using jQuery
// 1. addClass : add class
// 2. removeClass : remove present class
// 3. hasClass : return class present or not

// Ex :-
$("selecter").addClass("class-name")
$("selecter").addClass("class-one class-two") // space sepreted add multiple class

// add events using jQuery 
// .event name
// on("event-name", function(){});

// Ex :- 
$("selecter").click(function(){});
$("selecter").on("click", function(){});

// adding and removing element using jQuery
// 1. before(); 
// 2. after();
// 3. prepand();
// 4. append();

// Ex :- 
$("selecter").before("something here");

// animation add using jQuery 
// 1. hide();
// 2. show();
// 3. toggle();
// 4. fadeIn();
// 5. fadeOut();
// 6. fadeToggle();
// 7. slideUp();
// 8. slideDown();
// 9. animate({css}) : only for numberic value

Ex :- 
$("selecter").animate({padding : 20});
$("selecter").hide();