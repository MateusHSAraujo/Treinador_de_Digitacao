/*!
 * @file UART.h
 * @brief Este modulo contem declaracoes relacionadas com o modulo UART.c
 * @author Wu Shin Ting
 * @author Mateus Henrique Silva Araujo
 * @date 22/06/2023
 */

#ifndef UART_H_
#define UART_H_

/**
 * @brief Estimate prescaler for the given clock frequency and baud rate
 * @param[in] clock
 * @param[in] baud_rate
 */
uint16_t UART0_SBR (uint32_t clock, uint32_t baud_rate);

/**
 * @brief Ativar sinais de relogio e configurar pinos de acesso para UART0/FRDMKL25Z
 * @param[in] uart0src fonte de clock de UART0
 */
void UART0_config_basica(uint8_t uart0src);

/**
 * @brief Configurar o modo de operacao de UART0
 * @param[in] clock frequencia da fonte de relogio
 * @param[in] baud_rate taxa de transmissao
 * @param[in] osr taxa de superamostragem
 * 
 */
void UART0_config_especifica (uint32_t clock, uint32_t baud_rate, uint8_t osr);

/**
 * @brief Habilita NVIC IRQ 12
 * @param[in] prioridade de atendimento
 */
void UART0_habilitaNVICIRQ12(uint8_t prioridade);

/**
 * @brief Habilitar interrupcao Rx
 */
void UART0_habilitaInterruptRxTerminal();

void UART2_config_basica();
void UART2_config_especifica (uint32_t clock, uint32_t baud_rate);
void UART2_habilitaNVICIRQ14(uint8_t prioridade);
void UART2_habilitaInterruptRxTerminal() ;

#endif /* UART_H_ */
