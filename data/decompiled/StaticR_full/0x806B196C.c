/* Function at 0x806B196C, size=60 bytes */
/* Stack frame: 0 bytes */

void FUN_806B196C(int r4, int r5)
{
    /* lis r4, 0 */ // 0x806B196C
    r4 = *(0 + r4); // lwz @ 0x806B1970
    r4 = *(0 + r4); // lwz @ 0x806B1974
    r5 = *(0 + r4); // lwz @ 0x806B1978
    r0 = r5 + -0x58; // 0x806B197C
    if (>) goto 0x0x806b1b60;
    /* lis r4, 0 */ // 0x806B1988
    /* slwi r0, r0, 2 */ // 0x806B198C
    r4 = r4 + 0; // 0x806B1990
    /* lwzx r4, r4, r0 */ // 0x806B1994
    /* mtctr r4 */ // 0x806B1998
    /* bctr  */ // 0x806B199C
    if (<) goto 0x0x806b19b0;
}