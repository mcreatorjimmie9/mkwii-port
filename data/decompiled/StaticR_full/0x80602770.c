/* Function at 0x80602770, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_80602770(int r4, int r5, int r6)
{
    r6 = *(0x10 + r4); // lwz @ 0x80602770
    r5 = *(0x14 + r4); // lwz @ 0x80602774
    r0 = *(0x18 + r4); // lwz @ 0x80602778
    *(0 + r3) = r6; // stw @ 0x8060277C
    *(4 + r3) = r5; // stw @ 0x80602780
    *(8 + r3) = r0; // stw @ 0x80602784
    return;
}