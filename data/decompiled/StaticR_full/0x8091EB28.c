/* Function at 0x8091EB28, size=384 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8091EB28(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r8, 0 */ // 0x8091EB30
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x8091EB40
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8091EB48
    r29 = r7;
    r3 = *(0 + r8); // lwz @ 0x8091EB50
    FUN_8090B0E8(); // bl 0x8090B0E8
    r4 = *(0x34 + r30); // lwz @ 0x8091EB58
    /* clrlwi r0, r3, 0x10 */ // 0x8091EB5C
    /* lbzx r4, r4, r0 */ // 0x8091EB60
    if (<=) goto 0x0x8091eb70;
    r4 = r29;
    /* clrlwi. r0, r4, 0x18 */ // 0x8091EB70
    /* li r7, 0 */ // 0x8091EB74
    if (==) goto 0x0x8091ec88;
    r0 = r4 + 0xf8; // 0x8091EB80
    if (<=) goto 0x0x8091ec50;
    /* clrlwi r6, r0, 0x18 */ // 0x8091EB88
    r5 = r3 rlwinm 2; // rlwinm
    r0 = r6 + 7; // 0x8091EB90
    /* srwi r0, r0, 3 */ // 0x8091EB94
    /* mtctr r0 */ // 0x8091EB98
    if (<=) goto 0x0x8091ec50;
    r6 = *(0x3c + r30); // lwz @ 0x8091EBA4
    /* clrlwi r0, r7, 0x18 */ // 0x8091EBA8
    r7 = r7 + 8; // 0x8091EBAC
    /* lwzx r8, r5, r6 */ // 0x8091EBB0
    r6 = r31 + r0; // 0x8091EBB4
    /* lbzx r8, r8, r0 */ // 0x8091EBB8
    /* stbx r8, r31, r0 */ // 0x8091EBBC
    r8 = *(0x3c + r30); // lwz @ 0x8091EBC0
    /* lwzx r8, r5, r8 */ // 0x8091EBC4
    r8 = r8 + r0; // 0x8091EBC8
    r8 = *(1 + r8); // lbz @ 0x8091EBCC
    *(1 + r6) = r8; // stb @ 0x8091EBD0
    r8 = *(0x3c + r30); // lwz @ 0x8091EBD4
    /* lwzx r8, r5, r8 */ // 0x8091EBD8
    r8 = r8 + r0; // 0x8091EBDC
    r8 = *(2 + r8); // lbz @ 0x8091EBE0
    *(2 + r6) = r8; // stb @ 0x8091EBE4
    r8 = *(0x3c + r30); // lwz @ 0x8091EBE8
    /* lwzx r8, r5, r8 */ // 0x8091EBEC
    r8 = r8 + r0; // 0x8091EBF0
    r8 = *(3 + r8); // lbz @ 0x8091EBF4
    *(3 + r6) = r8; // stb @ 0x8091EBF8
    r8 = *(0x3c + r30); // lwz @ 0x8091EBFC
    /* lwzx r8, r5, r8 */ // 0x8091EC00
    r8 = r8 + r0; // 0x8091EC04
    r8 = *(4 + r8); // lbz @ 0x8091EC08
    *(4 + r6) = r8; // stb @ 0x8091EC0C
    r8 = *(0x3c + r30); // lwz @ 0x8091EC10
    /* lwzx r8, r5, r8 */ // 0x8091EC14
    r8 = r8 + r0; // 0x8091EC18
    r8 = *(5 + r8); // lbz @ 0x8091EC1C
    *(5 + r6) = r8; // stb @ 0x8091EC20
    r8 = *(0x3c + r30); // lwz @ 0x8091EC24
    /* lwzx r8, r5, r8 */ // 0x8091EC28
    r8 = r8 + r0; // 0x8091EC2C
    r8 = *(6 + r8); // lbz @ 0x8091EC30
    *(6 + r6) = r8; // stb @ 0x8091EC34
    r8 = *(0x3c + r30); // lwz @ 0x8091EC38
    /* lwzx r8, r5, r8 */ // 0x8091EC3C
    r8 = r8 + r0; // 0x8091EC40
    r0 = *(7 + r8); // lbz @ 0x8091EC44
    *(7 + r6) = r0; // stb @ 0x8091EC48
    if (counter-- != 0) goto 0x0x8091eba4;
    /* clrlwi r5, r4, 0x18 */ // 0x8091EC50
    /* clrlwi r6, r7, 0x18 */ // 0x8091EC54
    /* subf r0, r6, r5 */ // 0x8091EC58
    r8 = r3 rlwinm 2; // rlwinm
    /* mtctr r0 */ // 0x8091EC60
    if (>=) goto 0x0x8091ec88;
    r0 = *(0x3c + r30); // lwz @ 0x8091EC6C
    /* clrlwi r3, r7, 0x18 */ // 0x8091EC70
    r7 = r7 + 1; // 0x8091EC74
    /* lwzx r5, r8, r0 */ // 0x8091EC78
    /* lbzx r0, r5, r3 */ // 0x8091EC7C
    /* stbx r0, r31, r3 */ // 0x8091EC80
    if (counter-- != 0) goto 0x0x8091ec6c;
    r31 = *(0x1c + r1); // lwz @ 0x8091EC88
    r3 = r4;
    r30 = *(0x18 + r1); // lwz @ 0x8091EC90
    r29 = *(0x14 + r1); // lwz @ 0x8091EC94
    r0 = *(0x24 + r1); // lwz @ 0x8091EC98
    return;
}