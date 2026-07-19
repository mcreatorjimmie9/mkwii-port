/* Function at 0x805B7D98, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805B7D98(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r7;
    *(0x18 + r1) = r30; // stw @ 0x805B7DB0
    /* li r30, 0 */ // 0x805B7DB4
    *(0x14 + r1) = r29; // stw @ 0x805B7DB8
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x805B7DC0
    r28 = r4;
    if (==) goto 0x0x805b7e98;
    r3 = r6;
    r4 = r8;
    FUN_805E364C(r3, r4); // bl 0x805E364C
    r0 = r3 rlwinm 1; // rlwinm
    r4 = r28;
    /* lhzx r31, r31, r0 */ // 0x805B7DE0
    /* li r3, 0xb8 */ // 0x805B7DE4
    /* li r5, 4 */ // 0x805B7DE8
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805b7e68;
    /* lis r4, 0 */ // 0x805B7DF8
    /* lis r7, 0 */ // 0x805B7DFC
    r4 = r4 + 0; // 0x805B7E00
    *(0 + r3) = r4; // stw @ 0x805B7E04
    /* li r8, 0 */ // 0x805B7E08
    r7 = r7 + 0; // 0x805B7E0C
    *(4 + r3) = r8; // stw @ 0x805B7E10
}