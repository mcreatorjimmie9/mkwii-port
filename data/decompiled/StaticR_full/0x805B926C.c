/* Function at 0x805B926C, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805B926C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x805B9280
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x805B9288
    r29 = r4;
    if (!=) goto 0x0x805b929c;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r6 = *(0xc94 + r3); // lwz @ 0x805B9298
    r4 = r6;
    /* li r3, 0xb8 */ // 0x805B92A0
    /* li r5, 4 */ // 0x805B92A4
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
}