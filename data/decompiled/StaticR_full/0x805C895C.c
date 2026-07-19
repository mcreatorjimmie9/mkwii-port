/* Function at 0x805C895C, size=368 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_805C895C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x805C8964
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805C8978
    *(0x10 + r1) = r28; // stw @ 0x805C897C
    r5 = *(0 + r4); // lwz @ 0x805C8980
    /* li r4, 0 */ // 0x805C8984
    r0 = *(0xb70 + r5); // lwz @ 0x805C8988
    if (<) goto 0x0x805c89a0;
    if (>) goto 0x0x805c89a0;
    /* li r4, 1 */ // 0x805C899C
    if (!=) goto 0x0x805c89b0;
    /* li r3, 0 */ // 0x805C89A8
    /* b 0x805c8aac */ // 0x805C89AC
    r0 = *(0xb74 + r5); // lwz @ 0x805C89B0
    if (!=) goto 0x0x805c89c4;
    /* li r3, 0 */ // 0x805C89BC
    /* b 0x805c8aac */ // 0x805C89C0
    r3 = *(4 + r3); // lwz @ 0x805C89C4
    /* li r4, 2 */ // 0x805C89C8
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (!=) goto 0x0x805c89e0;
    /* li r3, 0 */ // 0x805C89D8
    /* b 0x805c8aac */ // 0x805C89DC
    r3 = *(4 + r30); // lwz @ 0x805C89E0
    /* li r4, 4 */ // 0x805C89E4
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (==) goto 0x0x805c89fc;
    /* li r3, 0 */ // 0x805C89F4
    /* b 0x805c8aac */ // 0x805C89F8
    r0 = *(0x34 + r30); // lbz @ 0x805C89FC
    if (==) goto 0x0x805c8a10;
    /* li r3, 0 */ // 0x805C8A08
    /* b 0x805c8aac */ // 0x805C8A0C
    /* li r31, 0 */ // 0x805C8A10
    /* lis r28, 0 */ // 0x805C8A14
    /* lis r29, 0 */ // 0x805C8A18
    /* b 0x805c8a94 */ // 0x805C8A1C
    /* clrlwi r0, r31, 0x18 */ // 0x805C8A20
    /* mulli r0, r0, 0xf0 */ // 0x805C8A24
    r3 = r4 + r0; // 0x805C8A28
    r0 = *(0x38 + r3); // lwz @ 0x805C8A2C
    if (!=) goto 0x0x805c8a90;
    r0 = *(0x2e + r3); // lbz @ 0x805C8A38
    /* extsb r0, r0 */ // 0x805C8A40
    if (>) goto 0x0x805c8a90;
    r3 = *(0 + r28); // lwz @ 0x805C8A48
    /* clrlwi r4, r0, 0x18 */ // 0x805C8A4C
    /* li r5, 0x1c20 */ // 0x805C8A50
    /* li r6, 0xe10 */ // 0x805C8A54
    FUN_805B3200(r5, r6); // bl 0x805B3200
    if (==) goto 0x0x805c8a90;
    r3 = *(4 + r30); // lwz @ 0x805C8A64
    r0 = r31 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805C8A6C
    /* lwzx r3, r3, r0 */ // 0x805C8A70
    r0 = *(0x38 + r3); // lwz @ 0x805C8A74
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805C8A78
    if (!=) goto 0x0x805c8a90;
    /* li r0, 1 */ // 0x805C8A80
    *(0x34 + r30) = r0; // stb @ 0x805C8A84
    /* li r3, 1 */ // 0x805C8A88
    /* b 0x805c8aac */ // 0x805C8A8C
    r31 = r31 + 1; // 0x805C8A90
    r4 = *(0 + r29); // lwz @ 0x805C8A94
    /* clrlwi r3, r31, 0x18 */ // 0x805C8A98
    r0 = *(0x24 + r4); // lbz @ 0x805C8A9C
    if (<) goto 0x0x805c8a20;
    /* li r3, 0 */ // 0x805C8AA8
    r0 = *(0x24 + r1); // lwz @ 0x805C8AAC
    r31 = *(0x1c + r1); // lwz @ 0x805C8AB0
    r30 = *(0x18 + r1); // lwz @ 0x805C8AB4
    r29 = *(0x14 + r1); // lwz @ 0x805C8AB8
    r28 = *(0x10 + r1); // lwz @ 0x805C8ABC
    return;
}