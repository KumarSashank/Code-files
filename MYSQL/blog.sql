CREATE TABLE `comments` (
  `id` <type>,
  `userid` <type>,
  `postid` <type>,
  `comment` <type>
);

CREATE TABLE `Category` (
  `id` <type>,
  `category name` <type>,
  `post id` <type>,
  FOREIGN KEY (`post id`) REFERENCES `comments`(`postid`)
);

CREATE TABLE `` (
  `` <type>
);

CREATE TABLE `liked` (
  `id` <type>,
  `userid` <type>,
  `postid` <type>
);

CREATE TABLE `posts` (
  `id` <type>,
  `title` <type>,
  `description` <type>,
  `img` <type>,
  `date` <type>,
  `userid` <type>,
  `category` <type>,
  `likes` <type>,
  FOREIGN KEY (`id`) REFERENCES `Category`(`post id`),
  FOREIGN KEY (`id`) REFERENCES `liked`(`postid`)
);

CREATE TABLE `USERS` (
  `id` <type>,
  `username` <type>,
  `email` <type>,
  `password` <type>,
  `img` <type>,
  `lastlogin` <type>,
  `bio` <type>,
  FOREIGN KEY (`id`) REFERENCES `comments`(`userid`),
  FOREIGN KEY (`id`) REFERENCES `liked`(`userid`)
);

