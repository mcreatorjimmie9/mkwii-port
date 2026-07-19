/* Function at 0x806823AC, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_806823AC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806823B8
    r31 = r3;
    r3 = r3 + 0x1c34; // 0x806823C0
    r4 = *(0x240 + r4); // lwz @ 0x806823C4
    FUN_806541B8(r3); // bl 0x806541B8
    r3 = r31 + 0x1c34; // 0x806823CC
    FUN_806540D8(r3, r3); // bl 0x806540D8
    if (==) goto 0x0x806823f4;
    r3 = r31 + 0x19e0; // 0x806823DC
    /* li r4, 1 */ // 0x806823E0
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r3 = r31 + 0x19e0; // 0x806823E8
    /* li r4, 0 */ // 0x806823EC
    FUN_80649F40(r3, r4, r3, r4); // bl 0x80649F40
    r3 = r31;
    /* li r4, 0x17 */ // 0x806823F8
    /* li r5, -1 */ // 0x806823FC
    FUN_806724B8(r4, r3, r4, r5); // bl 0x806724B8
    r0 = *(0x14 + r1); // lwz @ 0x80682404
    r31 = *(0xc + r1); // lwz @ 0x80682408
    return;
}