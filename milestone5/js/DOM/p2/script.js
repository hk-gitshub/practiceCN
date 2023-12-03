//complete the addBlog function to add moveup, movedown and delete button. 
function addBlog(blog) {
  const blogList = document.querySelector('.blog-list');
  
    
  const newBox = document.createElement('div');
  newBox.classList.add('blog-box');

  const newBlogPost = document.createElement('div');
  newBlogPost.classList.add('blog-post');
    newBox.appendChild(newBlogPost);
    

  const newBlogHeader = document.createElement('div');
  newBlogHeader.classList.add('blog-header');
  newBlogPost.appendChild(newBlogHeader);

  const newBlogTitle = document.createElement('h2');
  newBlogTitle.classList.add('blog-title');
  newBlogTitle.textContent = blog.title;
  newBlogHeader.appendChild(newBlogTitle);

  const newBlogDate = document.createElement('p');
  newBlogDate.classList.add('blog-date');
  newBlogDate.textContent = blog.date;
  newBlogHeader.appendChild(newBlogDate);

  const newBlogContent = document.createElement('p');
  newBlogContent.classList.add('blog-content');
  newBlogContent.textContent = blog.content;
  newBlogPost.appendChild(newBlogContent);

// create a new div with className blog-buttons and append it to newBox
const blogBtn=document.createElement('div');
blogBtn.classList.add('blog-buttons');

//Create moveup button with class blog-button and move-up
const upBtn=document.createElement('button');
upBtn.classList.add('blog-button', 'move-up');
upBtn.textContent='move-up';
//Add event listerner to moveup button
upBtn


//Create movedown button with class blog-button and move-down
const downBtn=document.createElement('button');
downBtn.classList.add('blog-button', 'move-down');
downBtn.textContent='movedown';
//Add event listerner to movedown button



//Create delete button with class blog-button and delete
const deleteBtn=document.createElement('button');
deleteBtn.classList.add('blog-button', 'delete');
deleteBtn.textContent='delete';
//Add event listerner to delete button


blogBtn.append(upBtn, downBtn, deleteBtn);
newBox.append(blogBtn);

  blogList.appendChild(newBox);

// Add event listeners to the buttons
}

const blogData = [
{
title: 'First Blog Post',
date: 'January 1, 2022',
content: 'This is the content of the first blog post.'
},
{
title: 'Second Blog Post',
date: 'February 1, 2022',
content: 'This is the content of the second blog post.'
},
{
title: 'Third Blog Post',
date: 'March 1, 2022',
content: 'This is the content of the third blog post.'
}
];

blogData.forEach(blog => addBlog(blog)); // Automatically call the function for each blog in the array