/* Function at 0x807B61D0, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_807B61D0(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x807B61D0
    r3 = *(4 + r3); // lwz @ 0x807B61D4
    r0 = *(0xc + r3); // lwz @ 0x807B61D8
    r3 = r0 rlwinm 5; // rlwinm
    return;
}