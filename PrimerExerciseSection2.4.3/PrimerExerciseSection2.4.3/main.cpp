void main()
{
	int i = 1;
	const int v2 = 0;
	int v1 = v2;
	int *p1 = &v1, &r1 = v1;
	const int *p2 = &v2, *const p3 = &i, &r2 = v2;

//  r1 = v2;
// a.Legal, the top-level const of v2 can be ignored.
//	p1 = p2;
// b.Illegal, the low-level const of p2 cannot be ignored.
//	p2 = p1;
// c. Legal, p1 can be converted to const int
//	p1 = p3;
// d. Illegal, the low-level const of p3 cannot be ignored.
//  p2 = p3;
// e.Legal, the top-level const of p3 can be ignored and the low - level const of p2 and p3 match.
}