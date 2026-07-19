/* Function at 0x805E7C14, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805E7C14(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* slwi r31, r4, 2 */ // 0x805E7C24
    *(0x14 + r1) = r29; // stw @ 0x805E7C2C
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805E7C34
    r28 = r3;
    r5 = *(0x24 + r3); // lwz @ 0x805E7C3C
    /* lwzx r3, r5, r31 */ // 0x805E7C40
    if (==) goto 0x0x805e7c54;
    r3 = *(0xc + r3); // lwz @ 0x805E7C4C
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x805e7cb0;
    r3 = *(0x24 + r28); // lwz @ 0x805E7C5C
    /* lwzx r0, r3, r31 */ // 0x805E7C60
    if (==) goto 0x0x805e7cb0;
    /* li r29, 0 */ // 0x805E7C6C
    /* li r31, 0 */ // 0x805E7C70
    /* b 0x805e7ca0 */ // 0x805E7C74
    r3 = *(0x3c + r28); // lwz @ 0x805E7C78
    r30 = r29 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r30 */ // 0x805E7C80
    if (==) goto 0x0x805e7c9c;
    r3 = *(0xc + r3); // lwz @ 0x805E7C8C
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x3c + r28); // lwz @ 0x805E7C94
    /* stwx r31, r3, r30 */ // 0x805E7C98
    r29 = r29 + 1; // 0x805E7C9C
    r0 = *(0x40 + r28); // lbz @ 0x805E7CA0
    /* clrlwi r3, r29, 0x18 */ // 0x805E7CA4
    if (<) goto 0x0x805e7c78;
    r0 = *(0x24 + r1); // lwz @ 0x805E7CB0
    r31 = *(0x1c + r1); // lwz @ 0x805E7CB4
    r30 = *(0x18 + r1); // lwz @ 0x805E7CB8
    r29 = *(0x14 + r1); // lwz @ 0x805E7CBC
    r28 = *(0x10 + r1); // lwz @ 0x805E7CC0
}