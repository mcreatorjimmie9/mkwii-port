/* Function at 0x80623C60, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80623C60(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80623C70
    r30 = r3;
    FUN_8061DC28(); // bl 0x8061DC28
    r3 = *(8 + r3); // lwz @ 0x80623C7C
    FUN_806414A8(); // bl 0x806414A8
    /* li r31, 0 */ // 0x80623C84
    /* b 0x80623ca4 */ // 0x80623C88
    r3 = r30;
    r4 = r31;
    FUN_8061DFB0(r3, r4); // bl 0x8061DFB0
    r3 = *(0x1c + r3); // lwz @ 0x80623C98
    FUN_806414A8(r3, r4); // bl 0x806414A8
    r31 = r31 + 1; // 0x80623CA0
    r3 = r30;
    FUN_8061DB68(r3); // bl 0x8061DB68
    /* clrlwi r0, r3, 0x10 */ // 0x80623CAC
    if (<) goto 0x0x80623c8c;
    r0 = *(0x14 + r1); // lwz @ 0x80623CB8
    r31 = *(0xc + r1); // lwz @ 0x80623CBC
    r30 = *(8 + r1); // lwz @ 0x80623CC0
    return;
}