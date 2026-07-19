/* Function at 0x8091EE2C, size=376 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8091EE2C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r8, 0 */ // 0x8091EE34
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x8091EE44
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8091EE4C
    r29 = r7;
    r3 = *(0 + r8); // lwz @ 0x8091EE54
    FUN_8090B0E8(); // bl 0x8090B0E8
    r4 = *(0x34 + r30); // lwz @ 0x8091EE5C
    r6 = r3 rlwinm 2; // rlwinm
    /* lwzx r3, r4, r6 */ // 0x8091EE64
    if (<=) goto 0x0x8091ee74;
    r3 = r29;
    /* li r7, 0 */ // 0x8091EE78
    if (==) goto 0x0x8091ef88;
    r8 = r3 + -8; // 0x8091EE84
    if (<=) goto 0x0x8091ef54;
    r0 = r8 + 7; // 0x8091EE8C
    r5 = r31;
    /* srwi r0, r0, 3 */ // 0x8091EE94
    /* li r4, 0 */ // 0x8091EE98
    /* mtctr r0 */ // 0x8091EE9C
    if (<=) goto 0x0x8091ef54;
    r0 = *(0x3c + r30); // lwz @ 0x8091EEA8
    r7 = r7 + 8; // 0x8091EEAC
    /* lwzx r8, r6, r0 */ // 0x8091EEB0
    /* lwzx r0, r8, r4 */ // 0x8091EEB4
    *(0 + r5) = r0; // stw @ 0x8091EEB8
    r0 = *(0x3c + r30); // lwz @ 0x8091EEBC
    /* lwzx r0, r6, r0 */ // 0x8091EEC0
    r8 = r0 + r4; // 0x8091EEC4
    r0 = *(4 + r8); // lwz @ 0x8091EEC8
    *(4 + r5) = r0; // stw @ 0x8091EECC
    r0 = *(0x3c + r30); // lwz @ 0x8091EED0
    /* lwzx r0, r6, r0 */ // 0x8091EED4
    r8 = r0 + r4; // 0x8091EED8
    r0 = *(8 + r8); // lwz @ 0x8091EEDC
    *(8 + r5) = r0; // stw @ 0x8091EEE0
    r0 = *(0x3c + r30); // lwz @ 0x8091EEE4
    /* lwzx r0, r6, r0 */ // 0x8091EEE8
    r8 = r0 + r4; // 0x8091EEEC
    r0 = *(0xc + r8); // lwz @ 0x8091EEF0
    *(0xc + r5) = r0; // stw @ 0x8091EEF4
    r0 = *(0x3c + r30); // lwz @ 0x8091EEF8
    /* lwzx r0, r6, r0 */ // 0x8091EEFC
    r8 = r0 + r4; // 0x8091EF00
    r0 = *(0x10 + r8); // lwz @ 0x8091EF04
    *(0x10 + r5) = r0; // stw @ 0x8091EF08
    r0 = *(0x3c + r30); // lwz @ 0x8091EF0C
    /* lwzx r0, r6, r0 */ // 0x8091EF10
    r8 = r0 + r4; // 0x8091EF14
    r0 = *(0x14 + r8); // lwz @ 0x8091EF18
    *(0x14 + r5) = r0; // stw @ 0x8091EF1C
    r0 = *(0x3c + r30); // lwz @ 0x8091EF20
    /* lwzx r0, r6, r0 */ // 0x8091EF24
    r8 = r0 + r4; // 0x8091EF28
    r0 = *(0x18 + r8); // lwz @ 0x8091EF2C
    *(0x18 + r5) = r0; // stw @ 0x8091EF30
    r0 = *(0x3c + r30); // lwz @ 0x8091EF34
    /* lwzx r0, r6, r0 */ // 0x8091EF38
    r8 = r0 + r4; // 0x8091EF3C
    r4 = r4 + 0x20; // 0x8091EF40
    r0 = *(0x1c + r8); // lwz @ 0x8091EF44
    *(0x1c + r5) = r0; // stw @ 0x8091EF48
    r5 = r5 + 0x20; // 0x8091EF4C
    if (counter-- != 0) goto 0x0x8091eea8;
    /* slwi r8, r7, 2 */ // 0x8091EF54
    /* subf r0, r7, r3 */ // 0x8091EF58
    r5 = r31 + r8; // 0x8091EF5C
    /* mtctr r0 */ // 0x8091EF60
    if (>=) goto 0x0x8091ef88;
    r0 = *(0x3c + r30); // lwz @ 0x8091EF6C
    /* lwzx r4, r6, r0 */ // 0x8091EF70
    /* lwzx r0, r4, r8 */ // 0x8091EF74
    r8 = r8 + 4; // 0x8091EF78
    *(0 + r5) = r0; // stw @ 0x8091EF7C
    r5 = r5 + 4; // 0x8091EF80
    if (counter-- != 0) goto 0x0x8091ef6c;
    r0 = *(0x24 + r1); // lwz @ 0x8091EF88
    r31 = *(0x1c + r1); // lwz @ 0x8091EF8C
    r30 = *(0x18 + r1); // lwz @ 0x8091EF90
    r29 = *(0x14 + r1); // lwz @ 0x8091EF94
    return;
}