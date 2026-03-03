Welcome to the Talvixguide, an open-source software suite dedicated to helping find media!

The purpose of this project is to allow the public to be able to reach anyone else on the internet with their media.

To give a specific usecase, there are certain video platforms that appear to host videos, and include discoverability as part 
of their platform, but they appear to neglect discoverability to such an extreme degree that some personalities end up in 
the dark on the internet for almost an eternity. 

I, and likely others, think it's a bit unfair to effectively hide content from the public. In fact, some of us would consider 
it to be an affront to the free speech of the users on the internet, both the consumers and the producers of the unseen content. 

For this reason, it has become apparent that a way of discovering new media and content maybe should be given to the public and 
this can both be made public itself, open source, and something that everyone can enjoy. Why not let the public be able to see and 
speak to each other? 

Right, so that's the basic premise. I'll explain more in other sections as I go.  

I've included devlogs that further document my thinking with regard to this project. 

The overall structure, at present is intended to modularize certain key components. Firstly, the metadata sources themselves 
are abstracted as their own sources. Some examples include local metadata files, distributed databases of metadata, or other 
more established systems that provide this metadata. For context, metadata here refers to information like the name of a 
piece of content and where it could be found on the internet. 

Secondly, the talvixguide-engine is going to be split into at least three other components. The talvixguide-engine-backend will 
be a system that coordinates the other components and potentially performs some processing itself. I'd like to write this in 
C++, but ideally this could also be modularized and a different program written in a different language could be used as a 
substitute.

Thirdly, The talvixguide-engine-algorithm will represent one or more algorithms that will process the content metadata 
and make decisions about what content should be recommended. An example algorithm is a simple uniformly random approach, which 
would recommend all content with equal probability. 

The fourth main component is the talvixguide-engine-frontend is a program that can be used to display to users some of the content 
metadata as part of fulfilling the recommendation. For example, some information or pictures about the content could be displayed, 
with a clickable hyperlink, which allows the user to then delve deeper into the recommended content. 

For each of these 4 main components, I'll aim to create default programs that are all open-source and available to the public 
so that a complete usable system exists. Over time, I would expect that either I personally add more to these projects to improve 
them, or others participate and build high quality modules that could be used for each of the components laid out here. 
