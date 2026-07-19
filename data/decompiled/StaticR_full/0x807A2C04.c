/* Function at 0x807A2C04, size=372 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_807A2C04(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r0 = r4 + -0xe5; // 0x807A2C10
    *(0x1c + r1) = r31; // stw @ 0x807A2C18
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x807A2C20
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x807A2C28
    r29 = r3;
    if (<=) goto 0x0x807a2c9c;
    if (==) goto 0x0x807a2c48;
    if (==) goto 0x0x807a2c8c;
    /* b 0x807a2cb8 */ // 0x807A2C44
    /* lis r3, 0 */ // 0x807A2C48
    r3 = *(0 + r3); // lwz @ 0x807A2C4C
    r4 = *(0x1c + r3); // lwz @ 0x807A2C50
    if (==) goto 0x0x807a2cb8;
    r4 = *(0 + r4); // lwz @ 0x807A2C5C
    if (==) goto 0x0x807a2cb8;
    if (==) goto 0x0x807a2c74;
    r0 = *(0x90 + r4); // lwz @ 0x807A2C6C
    /* b 0x807a2c78 */ // 0x807A2C70
    /* li r0, -1 */ // 0x807A2C74
    if (!=) goto 0x0x807a2cb8;
    /* li r4, 0x1e */ // 0x807A2C80
    FUN_807881A8(r4); // bl 0x807881A8
    /* b 0x807a2cb8 */ // 0x807A2C88
    /* lis r3, 0 */ // 0x807A2C8C
    r3 = *(0 + r3); // lwz @ 0x807A2C90
    FUN_8079DA14(r4, r3); // bl 0x8079DA14
    /* b 0x807a2cb8 */ // 0x807A2C98
    /* lis r3, 0 */ // 0x807A2C9C
    r3 = *(0 + r3); // lwz @ 0x807A2CA0
    r0 = *(0x40 + r3); // lwz @ 0x807A2CA4
    if (>=) goto 0x0x807a2cb8;
    /* li r3, 0 */ // 0x807A2CB0
    /* b 0x807a2d5c */ // 0x807A2CB4
    /* lis r3, 0 */ // 0x807A2CB8
    r3 = *(0 + r3); // lwz @ 0x807A2CBC
    r0 = *(0xb68 + r3); // lwz @ 0x807A2CC0
    if (<) goto 0x0x807a2cf0;
    if (>) goto 0x0x807a2cf0;
    if (!=) goto 0x0x807a2ce4;
    /* li r31, 0xd9 */ // 0x807A2CDC
    /* b 0x807a2cf0 */ // 0x807A2CE0
    if (!=) goto 0x0x807a2cf0;
    /* li r31, 0xd8 */ // 0x807A2CEC
    r3 = r29;
    r4 = r31;
    r5 = r30;
    FUN_807A0F78(r3, r4, r5); // bl 0x807A0F78
    r0 = r31 + -0xe5; // 0x807A2D00
    r31 = r3;
    if (>) goto 0x0x807a2d58;
    /* lis r3, 0 */ // 0x807A2D10
    /* clrlwi r4, r30, 0x18 */ // 0x807A2D14
    r3 = *(0 + r3); // lwz @ 0x807A2D18
    FUN_805C14C8(r3); // bl 0x805C14C8
    /* lis r4, 0 */ // 0x807A2D20
    r0 = r3;
    r4 = *(0 + r4); // lwz @ 0x807A2D28
    /* lis r3, 0 */ // 0x807A2D2C
    r0 = r0 rlwinm 2; // rlwinm
    /* li r5, 0 */ // 0x807A2D34
    r4 = *(0xc + r4); // lwz @ 0x807A2D38
    r3 = r3 + 0; // 0x807A2D3C
    /* lwzx r4, r4, r0 */ // 0x807A2D40
    r0 = *(0x20 + r4); // lbz @ 0x807A2D44
    /* extsb r0, r0 */ // 0x807A2D48
    /* subfic r0, r0, 0xc */ // 0x807A2D4C
    /* extsh r4, r0 */ // 0x807A2D50
    FUN_807A42D0(); // bl 0x807A42D0
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x807A2D5C
    r31 = *(0x1c + r1); // lwz @ 0x807A2D60
    r30 = *(0x18 + r1); // lwz @ 0x807A2D64
    r29 = *(0x14 + r1); // lwz @ 0x807A2D68
    return;
}