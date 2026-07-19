/* Function at 0x806FE488, size=92 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_806FE488(int r3, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* stmw r27, 0x1c(r1) */ // 0x806FE494
    r31 = r3;
    r28 = r5;
    r27 = r6;
    r29 = r7;
    r30 = r8;
    r0 = *(0x41f4 + r3); // lwz @ 0x806FE4AC
    if (!=) goto 0x0x806fe4c8;
    /* li r0, 2 */ // 0x806FE4B8
    *(0x14 + r3) = r0; // stw @ 0x806FE4BC
    /* li r3, 0 */ // 0x806FE4C0
    /* b 0x806fe5a4 */ // 0x806FE4C4
    r3 = *(0x757c + r3); // lwz @ 0x806FE4C8
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fe4e8;
    /* li r0, 6 */ // 0x806FE4D8
    *(0x14 + r31) = r0; // stw @ 0x806FE4DC
    /* li r3, 0 */ // 0x806FE4E0
}