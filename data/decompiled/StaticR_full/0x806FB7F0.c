/* Function at 0x806FB7F0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806FB7F0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806FB804
    r30 = r3;
    r0 = *(0x41f4 + r3); // lwz @ 0x806FB80C
    if (!=) goto 0x0x806fb828;
    /* li r0, 2 */ // 0x806FB818
    *(0x14 + r3) = r0; // stw @ 0x806FB81C
    /* li r3, 0 */ // 0x806FB820
    /* b 0x806fb888 */ // 0x806FB824
    r3 = *(0x757c + r3); // lwz @ 0x806FB828
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fb848;
    /* li r0, 6 */ // 0x806FB838
    *(0x14 + r30) = r0; // stw @ 0x806FB83C
    /* li r3, 0 */ // 0x806FB840
    /* b 0x806fb888 */ // 0x806FB844
}