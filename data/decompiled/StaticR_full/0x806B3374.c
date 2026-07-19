/* Function at 0x806B3374, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806B3374(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806B337C
    /* li r5, 0 */ // 0x806B3380
    *(0x14 + r1) = r0; // stw @ 0x806B3384
    *(0xc + r1) = r31; // stw @ 0x806B3388
    r31 = r3;
    r3 = r3 + 0x73c; // 0x806B3390
    FUN_806A0A34(r5, r3); // bl 0x806A0A34
    /* li r3, 0 */ // 0x806B3398
    /* li r0, -1 */ // 0x806B339C
    /* li r4, 1 */ // 0x806B33A0
    *(0x8b0 + r31) = r4; // stw @ 0x806B33A4
    *(0x44 + r31) = r3; // stw @ 0x806B33A8
    *(0x274 + r31) = r0; // stw @ 0x806B33AC
    *(0x48 + r31) = r3; // stw @ 0x806B33B0
    *(0x278 + r31) = r0; // stw @ 0x806B33B4
    *(0x27c + r31) = r3; // stw @ 0x806B33B8
    r31 = *(0xc + r1); // lwz @ 0x806B33BC
    r0 = *(0x14 + r1); // lwz @ 0x806B33C0
    return;
}