/* Function at 0x80748114, size=16 bytes */
/* Stack frame: 32 bytes */

void FUN_80748114(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x8074811C
    /* stfd f31, 0x10(r1) */ // 0x80748120
}