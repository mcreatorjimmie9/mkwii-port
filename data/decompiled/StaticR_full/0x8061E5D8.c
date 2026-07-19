/* Function at 0x8061E5D8, size=44 bytes */
/* Stack frame: 0 bytes */

void FUN_8061E5D8(int r3, int r5, int r6, int r7, int r8, int r9)
{
    r3 = *(0 + r3); // lwz @ 0x8061E5D8
    /* li r5, 0 */ // 0x8061E5DC
    /* li r6, 0 */ // 0x8061E5E0
    /* li r7, 0 */ // 0x8061E5E4
    r3 = *(0x2c + r3); // lwz @ 0x8061E5E8
    /* li r8, 0xc */ // 0x8061E5EC
    /* li r9, 0 */ // 0x8061E5F0
    r12 = *(0xc + r3); // lwz @ 0x8061E5F4
    r12 = *(0xc + r12); // lwz @ 0x8061E5F8
    /* mtctr r12 */ // 0x8061E5FC
    /* bctr  */ // 0x8061E600
}