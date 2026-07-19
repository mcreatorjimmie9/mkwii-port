/* Function at 0x8077BF0C, size=120 bytes */
/* Stack frame: 32 bytes */

void FUN_8077BF0C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* li r7, 0 */ // 0x8077BF10
    /* li r5, 0 */ // 0x8077BF14
    /* b 0x8077bf70 */ // 0x8077BF18
    r4 = *(0xbc + r3); // lwz @ 0x8077BF1C
    r7 = r7 + 1; // 0x8077BF20
    /* lwzx r6, r4, r5 */ // 0x8077BF24
    r4 = *(0x20 + r6); // lwz @ 0x8077BF28
    r0 = *(0x2c + r6); // lhz @ 0x8077BF2C
    /* lfs f2, 0x18(r4) */ // 0x8077BF30
    /* lfs f1, 0x1c(r4) */ // 0x8077BF34
    r0 = r0 | 1; // 0x8077BF38
    /* lfs f0, 0x20(r4) */ // 0x8077BF3C
    /* stfs f2, 8(r1) */ // 0x8077BF40
    *(0x2c + r6) = r0; // sth @ 0x8077BF44
    /* stfs f2, 0x30(r6) */ // 0x8077BF48
    r4 = *(0xbc + r3); // lwz @ 0x8077BF4C
    /* stfs f1, 0xc(r1) */ // 0x8077BF50
    /* lwzx r4, r4, r5 */ // 0x8077BF54
    r5 = r5 + 4; // 0x8077BF58
    /* stfs f0, 0x10(r1) */ // 0x8077BF5C
    r0 = *(0x2c + r4); // lhz @ 0x8077BF60
    r0 = r0 | 1; // 0x8077BF64
    *(0x2c + r4) = r0; // sth @ 0x8077BF68
    /* stfs f0, 0x38(r4) */ // 0x8077BF6C
    r0 = *(0xc4 + r3); // lbz @ 0x8077BF70
    if (<) goto 0x0x8077bf1c;
    return;
}