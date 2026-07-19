/* Function at 0x808F0194, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808F0194(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808F01A0
    r31 = r3;
    r0 = *(4 + r3); // lwz @ 0x808F01A8
    if (==) goto 0x0x808f01d8;
    if (==) goto 0x0x808f01e4;
    if (==) goto 0x0x808f01f0;
    if (==) goto 0x0x808f01fc;
    if (==) goto 0x0x808f0208;
    /* b 0x808f0210 */ // 0x808F01D4
    /* li r0, 6 */ // 0x808F01D8
    *(0x3d8 + r3) = r0; // stw @ 0x808F01DC
    /* b 0x808f0210 */ // 0x808F01E0
    /* li r0, 4 */ // 0x808F01E4
    *(0x3d8 + r3) = r0; // stw @ 0x808F01E8
    /* b 0x808f0210 */ // 0x808F01EC
    /* li r0, 3 */ // 0x808F01F0
    *(0x3d8 + r3) = r0; // stw @ 0x808F01F4
    /* b 0x808f0210 */ // 0x808F01F8
    /* li r0, 4 */ // 0x808F01FC
    *(0x3d8 + r3) = r0; // stw @ 0x808F0200
    /* b 0x808f0210 */ // 0x808F0204
    /* li r0, 6 */ // 0x808F0208
    *(0x3d8 + r3) = r0; // stw @ 0x808F020C
    r3 = r31;
    FUN_808B2D44(r3); // bl 0x808B2D44
    r3 = r31;
    /* li r4, 0 */ // 0x808F021C
    /* li r5, 6 */ // 0x808F0220
    FUN_806724E0(r3, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x808F0228
    r31 = *(0xc + r1); // lwz @ 0x808F022C
    return;
}