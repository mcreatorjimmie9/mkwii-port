/* Function at 0x806EDA98, size=224 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_806EDA98(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x806EDAA4
    r31 = r3;
    FUN_805E34E4(r3); // bl 0x805E34E4
    /* lis r3, 0 */ // 0x806EDAB4
    /* li r0, 0 */ // 0x806EDAB8
    *(8 + r1) = r0; // stw @ 0x806EDABC
    /* li r4, 0 */ // 0x806EDAC0
    r3 = *(0 + r3); // lwz @ 0x806EDAC4
    FUN_806E9970(r3, r4); // bl 0x806E9970
    if (>) goto 0x0x806edaf0;
    /* lis r3, 0 */ // 0x806EDAD4
    r3 = *(0 + r3); // lwz @ 0x806EDAD8
    r3 = *(0xb78 + r3); // lwz @ 0x806EDADC
    /* neg r0, r3 */ // 0x806EDAE0
    r0 = r0 | r3; // 0x806EDAE4
    /* srwi r3, r0, 0x1f */ // 0x806EDAE8
    /* b 0x806edafc */ // 0x806EDAEC
    /* li r4, 2 */ // 0x806EDAF4
    FUN_805E364C(r3, r4); // bl 0x805E364C
    if (==) goto 0x0x806edb10;
    r0 = *(8 + r1); // lwz @ 0x806EDB04
    r0 = r0 | 0x8000; // 0x806EDB08
    *(8 + r1) = r0; // stw @ 0x806EDB0C
    r3 = *(0 + r31); // lwz @ 0x806EDB10
    r0 = r3 + -3; // 0x806EDB14
    if (<=) goto 0x0x806edb34;
    if (<) goto 0x0x806edb50;
    if (<=) goto 0x0x806edb44;
    /* b 0x806edb50 */ // 0x806EDB30
    r3 = r31;
    FUN_806EE6EC(r3, r4); // bl 0x806EE6EC
    /* b 0x806edb50 */ // 0x806EDB40
    r3 = r31;
    FUN_806EE3F4(r4, r3, r4); // bl 0x806EE3F4
    r0 = *(8 + r1); // lwz @ 0x806EDB50
    *(0x2c + r31) = r0; // stw @ 0x806EDB58
    /* li r4, -1 */ // 0x806EDB5C
    FUN_805E35B8(r3, r4); // bl 0x805E35B8
    r0 = *(0x34 + r1); // lwz @ 0x806EDB64
    r31 = *(0x2c + r1); // lwz @ 0x806EDB68
    return;
}