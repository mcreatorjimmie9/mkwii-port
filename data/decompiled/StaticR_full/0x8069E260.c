/* Function at 0x8069E260, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8069E260(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8069E270
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8069E278
    r30 = r3;
    if (==) goto 0x0x8069e2b8;
    /* li r4, -1 */ // 0x8069E284
    r3 = r3 + 0x1b8; // 0x8069E288
    FUN_80668158(r4, r3); // bl 0x80668158
    r3 = r30 + 0x44; // 0x8069E290
    /* li r4, -1 */ // 0x8069E294
    FUN_806A0540(r4, r3, r3, r4); // bl 0x806A0540
    r3 = r30;
    /* li r4, 0 */ // 0x8069E2A0
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8069e2b8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8069E2BC
    r30 = *(8 + r1); // lwz @ 0x8069E2C0
    r0 = *(0x14 + r1); // lwz @ 0x8069E2C4
    return;
}