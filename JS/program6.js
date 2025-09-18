function constructor(title,author)
{
    this.Title = title
    this.Author = author 
}

const mybook = new constructor("perl","Mohan");
console.log("Title of book is "+mybook.Title)
console.log("Title of author is "+mybook.Author)

