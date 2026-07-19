/* Function at 0x806FB498, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806FB498(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x806FB4AC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806FB4B4
    r29 = r3;
    r0 = *(0x41f4 + r3); // lwz @ 0x806FB4BC
    if (!=) goto 0x0x806fb4d8;
    /* li r0, 2 */ // 0x806FB4C8
    *(0x14 + r3) = r0; // stw @ 0x806FB4CC
    /* li r3, 0 */ // 0x806FB4D0
    /* b 0x806fb54c */ // 0x806FB4D4
    r3 = *(0x757c + r3); // lwz @ 0x806FB4D8
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fb4f8;
    /* li r0, 6 */ // 0x806FB4E8
    *(0x14 + r29) = r0; // stw @ 0x806FB4EC
    /* li r3, 0 */ // 0x806FB4F0
    /* b 0x806fb54c */ // 0x806FB4F4
    r3 = r30;
}