/* Function at 0x8084C084, size=312 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_8084C084(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8084C094
    r31 = r31 + 0; // 0x8084C098
    *(0x18 + r1) = r30; // stw @ 0x8084C09C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8084C0A4
    r29 = r3;
    *(0x10 + r1) = r28; // stw @ 0x8084C0AC
    r0 = *(4 + r3); // lwz @ 0x8084C0B0
    if (==) goto 0x0x8084c33c;
    if (>) goto 0x0x8084c27c;
    /* lis r5, 0 */ // 0x8084C0C4
    /* slwi r0, r4, 2 */ // 0x8084C0C8
    r5 = r5 + 0; // 0x8084C0CC
    /* lwzx r5, r5, r0 */ // 0x8084C0D0
    /* mtctr r5 */ // 0x8084C0D4
    /* bctr  */ // 0x8084C0D8
    r28 = *(0 + r3); // lwz @ 0x8084C0DC
    /* li r4, 0xc */ // 0x8084C0E0
    r3 = *(0x6c + r28); // lwz @ 0x8084C0E4
    r3 = *(0x28 + r3); // lwz @ 0x8084C0E8
    FUN_805E6F54(r4); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x8084C0F0
    if (==) goto 0x0x8084c27c;
    r3 = *(0x6c + r28); // lwz @ 0x8084C0FC
    /* li r4, 0xc */ // 0x8084C100
    /* lfs f1, 0(r31) */ // 0x8084C104
    r3 = *(0x28 + r3); // lwz @ 0x8084C108
    /* lfs f2, 4(r31) */ // 0x8084C10C
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* b 0x8084c27c */ // 0x8084C114
    r3 = *(0 + r3); // lwz @ 0x8084C118
    /* li r4, 0xe */ // 0x8084C11C
    r3 = *(0x6c + r3); // lwz @ 0x8084C120
    r3 = *(0x28 + r3); // lwz @ 0x8084C124
    FUN_805E6F54(r4); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x8084C12C
    if (==) goto 0x0x8084c174;
    r28 = *(0 + r29); // lwz @ 0x8084C138
    /* li r4, 0xe */ // 0x8084C13C
    r3 = *(0x6c + r28); // lwz @ 0x8084C140
    r3 = *(0x28 + r3); // lwz @ 0x8084C144
    FUN_805E6F54(r4); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x8084C14C
    if (==) goto 0x0x8084c27c;
    r3 = *(0x6c + r28); // lwz @ 0x8084C158
    /* li r4, 0xe */ // 0x8084C15C
    /* lfs f1, 0(r31) */ // 0x8084C160
    r3 = *(0x28 + r3); // lwz @ 0x8084C164
    /* lfs f2, 4(r31) */ // 0x8084C168
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* b 0x8084c27c */ // 0x8084C170
    r28 = *(0 + r29); // lwz @ 0x8084C174
    /* li r4, 0xd */ // 0x8084C178
    r3 = *(0x6c + r28); // lwz @ 0x8084C17C
    r3 = *(0x28 + r3); // lwz @ 0x8084C180
    FUN_805E6F54(r4); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x8084C188
    if (==) goto 0x0x8084c27c;
    r3 = *(0x6c + r28); // lwz @ 0x8084C194
    /* li r4, 0xd */ // 0x8084C198
    /* lfs f1, 0(r31) */ // 0x8084C19C
    r3 = *(0x28 + r3); // lwz @ 0x8084C1A0
    /* lfs f2, 4(r31) */ // 0x8084C1A4
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* b 0x8084c27c */ // 0x8084C1AC
    r3 = *(0 + r3); // lwz @ 0x8084C1B0
    /* li r4, 3 */ // 0x8084C1B4
    r28 = *(0x6c + r3); // lwz @ 0x8084C1B8
}