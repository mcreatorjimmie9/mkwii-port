/* Function at 0x806491D8, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806491D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806491E8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806491F0
    r30 = r3;
    if (==) goto 0x0x80649250;
    /* li r4, -1 */ // 0x806491FC
    r3 = r3 + 0x340; // 0x80649200
    FUN_8066D2B4(r4, r3); // bl 0x8066D2B4
    r3 = r30 + 0x1cc; // 0x80649208
    /* li r4, -1 */ // 0x8064920C
    FUN_8066D018(r4, r3, r3, r4); // bl 0x8066D018
    r3 = r30 + 0x58; // 0x80649214
    /* li r4, -1 */ // 0x80649218
    FUN_8066D42C(r3, r4, r3, r4); // bl 0x8066D42C
    if (==) goto 0x0x80649240;
    r3 = r30 + 0x44; // 0x80649228
    /* li r4, -1 */ // 0x8064922C
    FUN_80668158(r3, r4); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x80649238
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x80649250;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80649254
    r30 = *(8 + r1); // lwz @ 0x80649258
    r0 = *(0x14 + r1); // lwz @ 0x8064925C
    return;
}