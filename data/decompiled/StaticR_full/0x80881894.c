/* Function at 0x80881894, size=44 bytes */
/* Stack frame: 0 bytes */

void FUN_80881894(int r3, int r4)
{
    r4 = *(0xb70 + r3); // lwz @ 0x80881894
    /* li r3, 0 */ // 0x80881898
    r4 = r4 + -3; // 0x8088189C
    /* bgtlr  */ // 0x808818A4
    /* li r0, 1 */ // 0x808818A8
    r0 = r0 << r4; // slw
    /* andi. r0, r0, 0xc1 */ // 0x808818B0
    /* beqlr  */ // 0x808818B4
    /* li r3, 1 */ // 0x808818B8
    return;
}