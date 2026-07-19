/* Function at 0x806812EC, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806812EC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806812FC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80681304
    r30 = r3;
    if (==) goto 0x0x80681348;
    /* li r4, -1 */ // 0x80681310
    r3 = r3 + 0x1bc; // 0x80681314
    FUN_80668158(r4, r3); // bl 0x80668158
    /* addic. r3, r30, 0x44 */ // 0x8068131C
    if (==) goto 0x0x8068132c;
    /* li r4, 0 */ // 0x80681324
    FUN_806A0540(r3, r4); // bl 0x806A0540
    r3 = r30;
    /* li r4, 0 */ // 0x80681330
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x80681348;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8068134C
    r30 = *(8 + r1); // lwz @ 0x80681350
    r0 = *(0x14 + r1); // lwz @ 0x80681354
    return;
}