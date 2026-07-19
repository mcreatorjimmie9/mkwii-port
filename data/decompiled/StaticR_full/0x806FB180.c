/* Function at 0x806FB180, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806FB180(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x806FB194
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806FB19C
    r29 = r3;
    r0 = *(0x41f4 + r3); // lwz @ 0x806FB1A4
    if (!=) goto 0x0x806fb1c0;
    /* li r0, 2 */ // 0x806FB1B0
    *(0x14 + r3) = r0; // stw @ 0x806FB1B4
    /* li r3, 0 */ // 0x806FB1B8
    /* b 0x806fb230 */ // 0x806FB1BC
    r3 = *(0x757c + r3); // lwz @ 0x806FB1C0
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fb1e0;
    /* li r0, 6 */ // 0x806FB1D0
    *(0x14 + r29) = r0; // stw @ 0x806FB1D4
    /* li r3, 0 */ // 0x806FB1D8
    /* b 0x806fb230 */ // 0x806FB1DC
    *(0x4200 + r29) = r30; // stw @ 0x806FB1E0
}