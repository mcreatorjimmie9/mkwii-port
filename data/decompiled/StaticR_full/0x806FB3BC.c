/* Function at 0x806FB3BC, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_806FB3BC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806FB3D8
    r28 = r3;
    r0 = *(0x41f4 + r3); // lwz @ 0x806FB3E0
    if (!=) goto 0x0x806fb3fc;
    /* li r0, 2 */ // 0x806FB3EC
    *(0x14 + r3) = r0; // stw @ 0x806FB3F0
    /* li r3, 0 */ // 0x806FB3F4
    /* b 0x806fb478 */ // 0x806FB3F8
    r3 = *(0x757c + r3); // lwz @ 0x806FB3FC
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fb41c;
    /* li r0, 6 */ // 0x806FB40C
    *(0x14 + r28) = r0; // stw @ 0x806FB410
    /* li r3, 0 */ // 0x806FB414
    /* b 0x806fb478 */ // 0x806FB418
    /* li r30, 0 */ // 0x806FB41C
    /* li r31, 1 */ // 0x806FB420
}