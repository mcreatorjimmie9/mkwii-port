/* Function at 0x806ACA1C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806ACA1C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806ACA28
    r31 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x806ACA30
    if (!=) goto 0x0x806aca58;
    /* li r4, 0 */ // 0x806ACA3C
    r3 = r3 + 0x230; // 0x806ACA40
    FUN_80649EEC(r4, r3); // bl 0x80649EEC
    r3 = r31 + 0xb98; // 0x806ACA48
    /* li r4, 0x10d6 */ // 0x806ACA4C
    /* li r5, 0 */ // 0x806ACA50
    FUN_808D5A00(r3, r3, r4, r5); // bl 0x808D5A00
    /* li r0, -1 */ // 0x806ACA58
    *(0xf30 + r31) = r0; // stw @ 0x806ACA5C
    r31 = *(0xc + r1); // lwz @ 0x806ACA60
    r0 = *(0x14 + r1); // lwz @ 0x806ACA64
    return;
}