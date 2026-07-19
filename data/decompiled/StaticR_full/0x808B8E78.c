/* Function at 0x808B8E78, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808B8E78(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x808B8E8C
    r29 = r3;
    FUN_808B3318(); // bl 0x808B3318
    /* lis r5, 0 */ // 0x808B8E98
    r3 = r29;
    r0 = *(0 + r5); // lwz @ 0x808B8EA0
    *(8 + r1) = r0; // stw @ 0x808B8EA8
    /* li r5, 1 */ // 0x808B8EAC
    FUN_808B4A2C(r3, r4, r5); // bl 0x808B4A2C
    /* lis r4, 0 */ // 0x808B8EB4
    /* lis r3, 0 */ // 0x808B8EB8
    r4 = *(0 + r4); // lwz @ 0x808B8EBC
    r0 = *(0x1780 + r4); // lwz @ 0x808B8EC0
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r4) = r0; // stw @ 0x808B8EC8
    r5 = *(0 + r3); // lwz @ 0x808B8ECC
    r0 = *(0x36 + r5); // lha @ 0x808B8ED0
    if (<) goto 0x0x808b8ef8;
    /* lis r3, 1 */ // 0x808B8EDC
    /* clrlwi r4, r0, 0x18 */ // 0x808B8EE0
    r0 = r3 + -0x6c10; // 0x808B8EE4
    r0 = r0 * r4; // 0x808B8EE8
    r3 = r5 + r0; // 0x808B8EEC
    r31 = r3 + 0x38; // 0x808B8EF0
    /* b 0x808b8efc */ // 0x808B8EF4
    /* li r31, 0 */ // 0x808B8EF8
    /* addis r3, r31, 1 */ // 0x808B8EFC
    /* li r30, 0 */ // 0x808B8F00
    /* li r4, 0x1e */ // 0x808B8F04
    r3 = r3 + -0x7008; // 0x808B8F08
    FUN_805D84B0(r4, r3); // bl 0x805D84B0
    if (!=) goto 0x0x808b8f34;
    /* addis r3, r31, 1 */ // 0x808B8F18
    /* li r4, 0x1f */ // 0x808B8F1C
    r3 = r3 + -0x7008; // 0x808B8F20
    FUN_805D84B0(r4, r3); // bl 0x805D84B0
    if (!=) goto 0x0x808b8f34;
    /* li r30, 1 */ // 0x808B8F30
    *(0x748 + r29) = r30; // stb @ 0x808B8F34
    r31 = *(0x1c + r1); // lwz @ 0x808B8F38
    r30 = *(0x18 + r1); // lwz @ 0x808B8F3C
    r29 = *(0x14 + r1); // lwz @ 0x808B8F40
    r0 = *(0x24 + r1); // lwz @ 0x808B8F44
    return;
}