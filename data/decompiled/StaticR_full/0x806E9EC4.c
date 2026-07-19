/* Function at 0x806E9EC4, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806E9EC4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806E9ED4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806E9EDC
    r30 = r3;
    if (==) goto 0x0x806e9f08;
    r3 = *(0 + r3); // lwz @ 0x806E9EE8
    FUN_805E3430(); // bl 0x805E3430
    /* li r0, 0 */ // 0x806E9EF4
    *(0 + r30) = r0; // stw @ 0x806E9EF8
    if (<=) goto 0x0x806e9f08;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
}