/* Function at 0x8066EB48, size=320 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8066EB48(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r7, 0 */ // 0x8066EB50
    r7 = r7 + 0; // 0x8066EB58
    /* li r0, 9 */ // 0x8066EB5C
    *(0x5c + r1) = r31; // stw @ 0x8066EB64
    r8 = r7 + -4; // 0x8066EB68
    *(0x58 + r1) = r30; // stw @ 0x8066EB6C
    /* mtctr r0 */ // 0x8066EB70
    r7 = *(4 + r8); // lwz @ 0x8066EB74
    r0 = *(8 + r8); // lwzu @ 0x8066EB78
    *(4 + r9) = r7; // stw @ 0x8066EB7C
    *(8 + r9) = r0; // stwu @ 0x8066EB80
    if (counter-- != 0) goto 0x0x8066eb74;
    /* lis r7, 0 */ // 0x8066EB88
    r0 = *(0x9c + r6); // lwz @ 0x8066EB8C
    r7 = *(0 + r7); // lwz @ 0x8066EB90
    /* srwi r0, r0, 0x1f */ // 0x8066EB98
    r8 = *(0xa8 + r6); // lwz @ 0x8066EB9C
    r7 = *(0 + r7); // lwz @ 0x8066EBA0
    /* mulli r10, r0, 0x24 */ // 0x8066EBA4
    r0 = *(0x38f + r7); // lbz @ 0x8066EBA8
    /* mulli r8, r8, 0xc */ // 0x8066EBAC
    r7 = r9 + r10; // 0x8066EBB0
    /* lwzx r10, r8, r7 */ // 0x8066EBB8
    if (==) goto 0x0x8066ec18;
    /* slwi r0, r5, 2 */ // 0x8066EBC0
    /* lis r7, 0 */ // 0x8066EBC4
    /* slwi r8, r5, 4 */ // 0x8066EBC8
    /* lis r5, 0 */ // 0x8066EBCC
    r31 = r3 + r0; // 0x8066EBD0
    r7 = r7 + 0; // 0x8066EBD4
    r9 = r7 + r8; // 0x8066EBD8
    r3 = *(0 + r5); // lwz @ 0x8066EBDC
    r5 = r6;
    r0 = *(8 + r31); // lwz @ 0x8066EBE4
    /* mulli r30, r4, 0x24 */ // 0x8066EBE8
    r7 = *(8 + r9); // lwz @ 0x8066EBEC
    r8 = *(4 + r9); // lwz @ 0x8066EBF0
    r6 = r10;
    r9 = *(0xc + r9); // lbz @ 0x8066EBF8
    r4 = r0 + r30; // 0x8066EBFC
    FUN_807FF804(r6); // bl 0x807FF804
    r0 = *(8 + r31); // lwz @ 0x8066EC04
    /* li r4, 1 */ // 0x8066EC08
    r3 = r0 + r30; // 0x8066EC0C
    *(0x20 + r3) = r4; // stb @ 0x8066EC10
    /* b 0x8066ec70 */ // 0x8066EC14
    /* slwi r0, r5, 2 */ // 0x8066EC18
    /* lis r7, 0 */ // 0x8066EC1C
    r9 = r3 + r0; // 0x8066EC20
    /* slwi r5, r5, 4 */ // 0x8066EC24
    /* mulli r11, r4, 0x24 */ // 0x8066EC28
    r0 = *(8 + r9); // lwz @ 0x8066EC2C
    r7 = r7 + 0; // 0x8066EC30
    /* li r4, 0 */ // 0x8066EC34
    r3 = r0 + r11; // 0x8066EC38
    r7 = r7 + r5; // 0x8066EC3C
    *(0x20 + r3) = r4; // stb @ 0x8066EC40
    /* lis r3, 0 */ // 0x8066EC44
    r5 = r6;
    r6 = r10;
    r0 = *(8 + r9); // lwz @ 0x8066EC50
    r8 = *(8 + r7); // lwz @ 0x8066EC54
    r3 = *(0 + r3); // lwz @ 0x8066EC58
    r4 = r0 + r11; // 0x8066EC5C
    r9 = *(4 + r7); // lwz @ 0x8066EC60
    r10 = *(0xc + r7); // lbz @ 0x8066EC64
    r7 = r4 + 0x20; // 0x8066EC68
    FUN_808008D0(r7); // bl 0x808008D0
    r0 = *(0x64 + r1); // lwz @ 0x8066EC70
    r31 = *(0x5c + r1); // lwz @ 0x8066EC74
    r30 = *(0x58 + r1); // lwz @ 0x8066EC78
    return;
}