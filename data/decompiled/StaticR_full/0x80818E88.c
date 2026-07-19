/* Function at 0x80818E88, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_80818E88(int r3)
{
    /* lis r3, 0 */ // 0x80818E88
    r3 = *(0 + r3); // lwz @ 0x80818E8C
    r3 = *(0x1ec + r3); // lbz @ 0x80818E90
    return;
}