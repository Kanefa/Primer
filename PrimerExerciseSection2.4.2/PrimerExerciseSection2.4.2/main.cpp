void main()
{
////////////////
// Exercise 2.27

//	int i = -1, &r = 0;
// a. Illegal, non const reference r can not be bound to a temporary object.

//  i2 was missing.  Assuming it was a const int (same as g).	
//	const int i2 = 1;
//	int *const p2 = &i2;
// b. IlLegal, non const pointer cannot point to a const object.

//	const int i = -1, &r = 0;
// c. Legal, a const reference can be bound to a temporary object.

//  i2 was missing.  Assuming it was a const int (same as g).	
//	const int i2 = 1;
//	const int *const p3 = &i2;
// d. Legal, the pointer to const was initialized and the type of the pointed to object matches i2.

//  i2 was missing.  Assuming it was a const int (same as g).	
//	const int i2 = 1;
//	const int *p1 = &i2;
// e. Legal, the type of the pointed to object matches i2.

//	const int &const r2;
// f. Illegal, references must be initialized.

//  Assuming the following line 
//	const int i = -1;
//	const int i2 = i, &r = i;
// g. Legal, a reference to const int can be be bound to const int.  

////////////////
// Exercise 2.28

//	int i, *const cp;
//	a. Legal and illegal, a constant pointer must be initialized.

//	int *p1, *const p2;
//	b. Legal and illegal, a constant pointer must be initialized.

//	const int ic = 9, &r = ic;
// c. Illegal, ic must be initialized

//	const int *const p3;
// d. Illegal, a constant pointer must be initialized.

//	const int *p;
// e. Legal

///////////////
//Exercise 2.29

//	int i;
//	const int ic = 9;
//	i = ic;
// a. Legal, top-level const is ignored. 

//	int i = 0;
//	int *p1;
//	const int *const p3 = &i;
//	p1 = p3;
// b. Illegal, low-level const must match.

//	int *p1;
//	const int ic = 7;
//	p1 = &ic;
// c.Legal, top-level const is ignored.

//  const int i = 1;
//  const int *const p3 = &i;
//  const int ic = 2;
//  p3 = &ic;
// d. Illegal, p3 cannot be reassigned, because it is a const pointer.

//  int i = 1;
//  int *const p2 = &i;
//  int f = 2;
//  int * p1 = &f;
//  p2 = p1;
// e. Illegal, p2 cannot be reassigned, because it is a const pointer.

//  const int ic = 2;
//  const int i = 1;
//  const int *const p3 = &i;
//  ic = *p3;
// f. Illegal, ic cannont be reassigned, because it is const.
}
