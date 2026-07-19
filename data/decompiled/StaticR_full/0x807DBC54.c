/* Function at 0x807DBC54, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807DBC54(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r6, 0 */ // 0x807DBC5C
    *(0xc + r1) = r31; // stw @ 0x807DBC64
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807DBC6C
    r30 = r3;
    r0 = *(0x20 + r4); // lwz @ 0x807DBC74
    if (>) goto 0x0x807dbe20;
    /* lis r5, 0 */ // 0x807DBC80
    /* slwi r0, r0, 2 */ // 0x807DBC84
    r5 = r5 + 0; // 0x807DBC88
    /* lwzx r5, r5, r0 */ // 0x807DBC8C
    /* mtctr r5 */ // 0x807DBC90
    /* bctr  */ // 0x807DBC94
    FUN_807DB4F4(r5); // bl 0x807DB4F4
    r6 = r3;
    /* b 0x807dbe20 */ // 0x807DBCA0
    r3 = *(0x34 + r3); // lwz @ 0x807DBCA4
    /* li r5, 0 */ // 0x807DBCA8
    if (==) goto 0x0x807dbcc8;
}