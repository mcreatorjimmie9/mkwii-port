/* Function at 0x80830034, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80830034(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x80830048
    r30 = r4;
    FUN_80826540(); // bl 0x80826540
    if (==) goto 0x0x80830064;
    r4 = r30 + 0x1d0; // 0x8083005C
    /* b 0x80830068 */ // 0x80830060
    /* li r4, 0 */ // 0x80830064
    r5 = r31;
    FUN_808264D4(r4, r4, r5); // bl 0x808264D4
    if (==) goto 0x0x80830088;
    if (==) goto 0x0x80830088;
    /* li r3, 9 */ // 0x80830080
    FUN_80827378(r3); // bl 0x80827378
    r0 = *(0x14 + r1); // lwz @ 0x80830088
    r31 = *(0xc + r1); // lwz @ 0x8083008C
    r30 = *(8 + r1); // lwz @ 0x80830090
    return;
}