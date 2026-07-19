/* Function at 0x80700A90, size=76 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80700A90(int r3, int r4, int r5, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r7, 4 */ // 0x80700A98
    /* li r0, 0 */ // 0x80700AA0
    *(0x1c + r1) = r31; // stw @ 0x80700AA4
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80700AAC
    *(0x14 + r1) = r29; // stw @ 0x80700AB0
    r29 = r5;
    /* li r5, 0x2800 */ // 0x80700AB8
    *(0x10 + r1) = r28; // stw @ 0x80700ABC
    r28 = r4;
    /* li r4, 0 */ // 0x80700AC4
    *(0x4204 + r3) = r6; // stw @ 0x80700AC8
    *(0x4200 + r3) = r7; // stw @ 0x80700ACC
    *(0x420c + r3) = r0; // stw @ 0x80700AD0
    r3 = r3 + 0x4210; // 0x80700AD4
    FUN_805E3430(r4, r3); // bl 0x805E3430
}