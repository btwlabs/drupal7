Le Gate
===============

Le Gate is a simple module that restricts user access to pages on a site, and then provides two mechanisms
by which users can then gain access. It was first developed as an "age gate" module to allow access to a site
only when an appropriate age is selected (>15yo for COPPA). But then we decided to make it more generic.

When a user tries to access a restricted page they will be redirected to a configurable and themable page
that presents one of two ways to gain access. When access is gained a cookie is set using the cookie_monster
module.

The two 'access mechanisms' are:

Date: A date field is presented and if the date entered is within a configurable range, then a cookie

Buttons (yes/no):