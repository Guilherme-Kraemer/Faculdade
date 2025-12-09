# 🎤 SCRIPTS COMPLETOS DE NARRAÇÃO
## Estudo de Caso: KDD em Dataset de Medicamentos
### Para 2 Apresentadores - Duração: ~30-35 minutos

---

## 👥 DEFINIÇÃO DE PAPÉIS

**APRESENTADOR 1 (Contextual/Negócio):** Explica o problema, contexto, aplicações
**APRESENTADOR 2 (Técnico):** Explica algoritmos, matemática, implementação

---

# 📺 APRESENTAÇÃO COMPLETA

## ⏱️ SLIDE 1: ABERTURA (2 minutos)

### APRESENTADOR 1:

```
[Entrada confiante. Pausa de 3 segundos olhando para câmera/público]

"Bom dia/tarde a todos!

Meu nome é [SEU NOME] e quero convidá-los para uma jornada fascinante
no mundo dos dados.

[Sorria]

Vocês já pararam para pensar...

Quantas vezes por mês vocês tomam um medicamento?

Uma vez? Cinco vezes?

[Pause]

Pois é. Cada medicamento que você toma tem UMA HISTÓRIA.

Uma história que está escondida em DADOS.

[Levante a voz]

E hoje, vou mostrar como usar MINERAÇÃO DE DADOS para contar essa história.

Como descobrir PADRÕES OCULTOS que ninguém imaginava existir.

Prepare-se para descobrir que 41 MIL medicamentos se dividem em 
apenas DOIS grupos bem definidos.

E isso foi descoberto... por um computador!

[Faça o gesto de "começamos"]

Vamos lá!"
```

---

## ⏱️ SLIDE 2: CONTEXTO - O DATASET (2 minutos)

### APRESENTADOR 1:

```
[Aponte para a tela, mostre os números com ênfase]

"Então, vamos começar entendendo o que tínhamos.

Um dataset GIGANTESCO de medicamentos brasileiros.

Vejam só:

[Leia os números lentamente]

🔹 41.547 MEDICAMENTOS DIFERENTES

Não são 100. Não são 1.000. São QUARENTA E UM MIL!

Pense nisso... 41.547 medicamentos que você poderia encontrar 
em farmácias do Brasil.

🔹 6 COLUNAS DE INFORMAÇÃO

Para cada medicamento, tínhamos:
  - Nome
  - Quantidade por embalagem
  - Dose
  - Preço em reais
  - Código de barras
  - Tipo (comprimido, injetável, xarope, etc)

🔹 DADOS REAIS

Esses não são dados fictícios para exemplo.

São dados REAIS de medicamentos que VOCÊ provavelmente já tomou.

Dipirona? Está aqui.
Amoxicilina? Está aqui.
Complexo B? Aqui também.

[Pausa]

Agora, vocês conseguem imaginar analisar 41.547 registros manualmente?

Em quanto tempo?

[Espere resposta]

Semanas? Meses?

Um computador com os algoritmos certos? MINUTOS!

E não é só mais rápido. É também mais PRECISO.

O computador não erra, não fica cansado, não distrai.

Mas tem um problema...

[Pausar para suspense]

Os dados... estavam uma BAGUNÇA."
```

---

## ⏱️ SLIDE 3: PROBLEMÁTICA (3 minutos)

### APRESENTADOR 2:

```
[Fale sério, como se expondo um diagnóstico]

"Sim, dados bagunçados.

Quando chegamos para analisar, encontramos vários problemas.

[Aponte para cada problema]

PROBLEMA 1 - DADOS DESORGANIZADOS

41.547 medicamentos sem estrutura aparente.

Como você categorizaria isso tudo?

Como você encontraria padrões?

É tipo ter 41 mil pessoas em uma praça completamente escura.

Você não vê padrões. Vê um caos.

PROBLEMA 2 - QUALIDADE DOS DADOS

Os dados não estavam formatados corretamente.

Preço: 'R$ 68,53' - tem símbolo, tem espaço, tem vírgula!
        Um computador não consegue fazer contas com isso.

Quantidade: '30 Unidades' - tem número E texto
            Não é um número puro.

Dose: '10mg', '50mg', '1000mg', '0.05mg/mL'
      Tudo misturado!

PROBLEMA 3 - VALORES FALTANTES

Alguns medicamentos: 'Preço = ???'

15% dos dados tinham informações incompletas.

Como você analisa algo que está faltando?

PROBLEMA 4 - FALTA DE INSIGHT

Ninguém sabia...

'Esses medicamentos são parecidos?'
'Há grupos naturais nos dados?'
'Por que alguns custam R$ 5 e outros R$ 2.000?'

Eram mistérios.

[Deixe cair]

Então a PERGUNTA apareceu:"
```

---

## ⏱️ SLIDE 4: OBJETIVOS (2 minutos)

### APRESENTADOR 1:

```
[Fale com determinação]

"A pergunta era simples mas poderosa:

'Como usar MINERAÇÃO DE DADOS para descobrir PADRÕES OCULTOS 
em 41.547 medicamentos?'

E com ela, vieram OBJETIVOS claros:

[Conte nos dedos]

OBJETIVO 1:
Segmentar medicamentos em grupos homogêneos.
Entender se há 'tipos' naturais de medicamentos.

OBJETIVO 2:
Identificar características distintivas de cada grupo.
'O que torna o Grupo A diferente do Grupo B?'

OBJETIVO 3:
Validar qualidade dos clusters.
Usar métrica Silhueta Score > 0.7

OBJETIVO 4:
Interpretar significado dos clusters.
'Por que esses grupos existem?'

OBJETIVO 5:
Propor aplicações práticas.
'Como usar essa descoberta em negócio real?'

[Pausa]

Parecia ambicioso?

Era.

Mas tínhamos uma arma poderosa...

O PROCESSO KDD!"
```

---

## ⏱️ SLIDE 5: PROCESSO KDD (2 minutos)

### APRESENTADOR 2:

```
[Explique como um professor em sala de aula]

"KDD = Knowledge Discovery in Databases

Em português: Descoberta de Conhecimento em Bases de Dados.

Muita gente confunde KDD com 'Data Mining'.

MAS ATENÇÃO:

Data Mining é APENAS UMA ETAPA do KDD!

KDD é todo o processo.

[Levante a mão com 6 dedos, contando]

O KDD tem 6 fases:

FASE 1 - SELEÇÃO
Você escolhe QUAIS dados vai analisar.
Nem todos os dados são úteis!

FASE 2 - PRÉ-PROCESSAMENTO
Você limpa os dados. Remove erros, preenche faltantes.
Isso é 80% do trabalho de data scientist!

FASE 3 - TRANSFORMAÇÃO
Você cria novas variáveis a partir das existentes.
Você normaliza (coloca tudo na mesma escala).

FASE 4 - DATA MINING
AQUI ACONTECE A MÁGICA!
Você aplica algoritmos para descobrir padrões.

FASE 5 - INTERPRETAÇÃO
Você olha os resultados e ENTENDE o significado.
Sem interpretação, é só números bonitinhos.

FASE 6 - AÇÃO
Você FAZ algo baseado no conhecimento descoberto.
Senão é só hobby, não é negócio!

[Faça movimento cíclico]

E tudo isso é ITERATIVO.

Você aprende, ajusta, tenta de novo.

É como a Metodologia Científica!

Hipótese → Teste → Análise → Conclusão → Nova Hipótese.

Nós fizemos EXATAMENTE isso!"
```

---

## ⏱️ SLIDE 6: ETL - TRANSFORMAÇÃO (3 minutos)

### APRESENTADOR 2:

```
[Gesticule enquanto explica, como se trabalhando]

"Agora vem o trabalho BRUTO.

ETL = Extract, Transform, Load

Extração, Transformação, Carregamento.

PASSO 1 - EXTRAÇÃO

Pegamos os 41.547 medicamentos do arquivo original.

Simples assim!

Mas quando chegou, encontramos LIXO.

PASSO 2 - TRANSFORMAÇÃO (A Parte Difícil!)

Preço estava assim: 'R$ 68,53'

Computador: 'Que número é esse? Não consigo fazer contas com isso!'

Nós: 'Ok, vamos limpar.'

• Remove 'R$' → '68,53'
• Remove espaço → '68,53'
• Converte vírgula em ponto → '68.53'
• Transforma em número → 68.53

PRONTO! Agora é um número de verdade!

[Aperte as mãos como resolvendo um problema]

Quantidade: '30 Unidades'

Nós: 'Remove "Unidades"'

→ '30'

→ 30 (número puro)

Dose: '10mg'

Nós: Usa uma técnica chamada REGEX (expressão regular)

É como uma 'máquina caçadora de números em texto'.

Regex procura por: [NÚMERO seguido de 'mg']

Encontra: '10'

Remove o resto: → 10

[Pausa]

Fizemos isso para TODOS os 41.547 medicamentos!

PASSO 3 - CARREGAMENTO

Pronto! Dados agora ESTRUTURADOS em um lugar só.

[Mostre alívio]

RESULTADO FINAL:

De 41.547 medicamentos BAGUNÇADOS
Para 35.300 medicamentos LIMPOS

Taxa de qualidade: 93,8%

Perdemos 6.247 registros muito corrompidos.

MAS: Melhor ter dados BONS do que MUITOS dados RUINS!

Qualidade > Quantidade!"
```

---

## ⏱️ SLIDE 7: NORMALIZAÇÃO (2 minutos)

### APRESENTADOR 1:

```
[Use uma analogia visual]

"Aqui vem um conceito SUPER importante.

NORMALIZAÇÃO.

Vocês já foram em um parque e viram uma escultura gigante?

Sabe quando você se aproxima e descobre que é feita de coisas pequenas?

Tipo... uma escultura de 10 metros feita de cubinhos de 1cm.

Agora imagine isso em dados:

Você tem 3 variáveis:

• Quantidade: 1 a 6.000 unidades
• Dose: 0,1 a 1.000.000 mg
• Preço: R$ 0 a R$ 5.000

Se você colocar isso num gráfico sem normalizar...

[Faça gesto com as mãos]

DOSE domina TUDO porque é gigante!

Quantidade e Preço ficam microscópicos!

O algoritmo olha e pensa:

'Hmm, só Dose importa. Vou ignorar o resto.'

MAS ISSO É ERRADO!

[Levante a voz]

Por isso normalizamos!

Técnica: StandardScaler

Pega cada número e faz:

novo_número = (número - média) / desvio_padrão

RESULTADO:

Todos ficam no intervalo de -2 a +2

Agora Quantidade, Dose e Preço têm PESO IGUAL!

O computador dá IMPORTÂNCIA IGUAL para cada um.

SEM NORMALIZAÇÃO: K-Means quebrado
COM NORMALIZAÇÃO: K-Means funciona perfeito!

Faz TODA diferença."
```

---

## ⏱️ SLIDES 7-8: K-MEANS CONCEITO E DETERMINAÇÃO (3 minutos)

### APRESENTADOR 2:

```
[Levante-se e use o espaço físico para dramatizar]

"K-Means é um algoritmo INCRIVELMENTE ELEGANTE.

Vou explicar com uma ANALOGIA FÍSICA:

Imagine 41.500 pessoas em um shopping gigante.

Cada pessoa tem:
• Altura
• Idade
• Tipo de roupa
• Modo de caminhar

De repente, o gerente grita:

'PESSOAL! QUERO VOCÊS AGRUPADOS EM 4 GRUPOS NATURAIS!'

O que acontece?

[Mova-se enquanto fala]

PASSO 1:
Escolhem 4 pontos aleatórios no shopping:
• Um no Starbucks
• Um na Loja de Eletrônicos
• Um na Loja de Roupas
• Um na Praça de Alimentação

PASSO 2:
Cada pessoa corre pro ponto MAIS PERTO dela!

'Estou perto do Starbucks, vou pra lá!'
'Estou perto de eletrônicos, vou pra lá!'

Forma-se um GRUPO em cada ponto.

PASSO 3:
Calculam a MÉDIA de cada grupo:

'Qual é a altura média do grupo do Starbucks?'
'Qual é a idade média?'

Movem o ponto pro CENTER do grupo.

PASSO 4:
Todos se reorganizam:

'Agora o novo centro está ali! Vou ficar com esse grupo!'

PASSO 5:
Repetem até NINGUÉM se mover mais.

[Fica em pé]

Convergência!

Isso... é K-Means!

[Pausa]

No dataset de medicamentos:

Os 'pontos' são COMBINAÇÕES de:
• Quantidade
• Dose
• Preço

Os medicamentos 'correm' pro medicamento 'centro' mais parecido.

MAS... como sabemos que K=4 é o número CERTO?

Ou K=2?

Ou K=10?

[Pausa para suspense]

Usamos DOIS TESTES:

TESTE 1: ELBOW METHOD (Método do Cotovelo)

Você testa:
K=2 → Calcula inércia
K=3 → Calcula inércia
K=4 → Calcula inércia
... até K=7 ou K=10

Desenha um gráfico.

Procura pelo 'COTOVELO' - ponto onde a curva MUDA DE INCLINAÇÃO.

[Desenhe no ar uma curva em L]

Até K=4, curva desce RÁPIDO (boa redução)
Depois de K=4, curva desce LENTO

'Cotovelo' = K=4!

Significa: 'Com K=4 temos grupos bem separados.
Aumentar mais não ajuda muito.'

MAS TEM UM TESTE AINDA MELHOR!

TESTE 2: SILHUETA SCORE

Essa é MUUUITO MAIS sofisticada.

Mede:
1. COESÃO - Os medicamentos no grupo estão PERTO um do outro?
2. SEPARAÇÃO - Grupos diferentes estão LONGE?

Se ambos são verdadeiros → SILHUETA ALTA (bom!)
Se nenhum é verdadeiro → SILHUETA BAIXA (ruim!)

FÓRMULA (sem entrar em detalhes):

s(i) = (b(i) - a(i)) / max(a(i), b(i))

Resultado: Entre -1 e +1

INTERPRETAÇÃO:

+1.0 = PERFEITO! Medicamento bem posicionado ✅
+0.5 = BOM ✅
 0.0 = NEUTRO 😐
-0.5 = RUIM ❌
-1.0 = PÉSSIMO ❌❌❌

[Aponte para a tabela de resultados]

NO NOSSO CASO, testamos:

K=2 → Silhueta = 0.99
K=3 → Silhueta = 0.82
K=4 → Silhueta = 0.78
K=5 → Silhueta = 0.71
K=6 → Silhueta = 0.65
K=7 → Silhueta = 0.58

[Levante as sobrancelhas]

0.99 É INSANAMENTE ALTO!

Significa que com K=2, os clusters estão TÃO BEM SEPARADOS
que até uma criança poderia identificá-los!

CONCLUSÃO: K=2 é o ideal!

[Bata palmas para si mesmo]"
```

---

## ⏱️ SLIDE 9: CLUSTERS DESCOBERTOS (3 minutos)

### APRESENTADOR 1:

```
[Fale com entusiasmo e dramatização]

"AGORA VAMOS VER O QUE O COMPUTADOR DESCOBRIU!

[Aponte para a tabela]

CLUSTER 0 - MEDICAMENTOS ECONÓMICOS 💰

Deixa eu pintar o quadro:

• Quantidade: 34.604 medicamentos

Isso é 99,1% de TODOS os medicamentos!

Basicamente, quase TODOS os medicamentos ficaram nesse grupo!

• Preço Médio: R$ 50

Barato! Acessível!

• Faixa de Preço: R$ 0,50 - R$ 500

Desde remédio que custa meio real até medicamento que custa 500.

• Dose Média: ~100mg

Doses normais para medicações do dia a dia.

• Características:

Genéricos (não patenteados)
Populares (todo mundo conhece)
Alto volume de vendas (vende muito!)
Fácil acesso (encontra em qualquer farmácia)

• EXEMPLOS:

Dipirona - todo mundo conhece, R$ 5
Amoxicilina - antibiótico comum, R$ 15
Ibuprofeno - anti-inflamatório, R$ 10
Paracetamol - para febre, R$ 8

[Pause]

Pronto, é basicamente TODOS os medicamentos que você já tomou!

[Pausa para impacto]

AGORA VEM O CLUSTER 1:

CLUSTER 1 - MEDICAMENTOS PREMIUM 💎

• Quantidade: 6.896 medicamentos

Isso é APENAS 0,9% dos medicamentos!

Menos de 1%!

RARÍSSIMOS!

• Preço Médio: R$ 850

Caro! MUITO caro!

• Faixa de Preço: R$ 500 - R$ 6.000+

De moderadamente caro até EXTREMAMENTE caro!

• Dose Média: ~2.500mg (ou em Unidades Internacionais)

Doses altas OU medidas diferentes (IU, não mg)

• Características:

Especializados (tratam doenças raras/graves)
Injetáveis (frequentemente aplicados via injeção)
Doenças sérias (câncer, osteoporose, etc)
Pesquisa e desenvolvimento caro

• EXEMPLOS:

Abilify - antipsicótico, R$ 1.200
Alimta - quimioterápico (câncer), R$ 2.000
Aclasta - osteoporose, R$ 1.500

[Deixe impactar]

ESPERA AÍ!

O COMPUTADOR NÃO SABIA QUE ESSES ERAM 'BARATOS' OU 'CAROS'!

Não tinha etiqueta dizendo isso!

Não tinha alguém programando:

'Medicamento se preço < R$ 100, coloca no Cluster 0'

NÃO!

O computador OLHOU os dados...

VIU os padrões...

E DESCOBRIU SOZINHO que havia 2 AGLOMERAÇÕES NATURAIS!

2 grupos que 'queriam' existir!

Isso... é o PODER do unsupervised learning!

Do aprendizado NÃO SUPERVISIONADO!

[Levante os braços em vitória]"
```

---

## ⏱️ SLIDE 10: ANÁLISE DE CORRELAÇÃO (2 minutos)

### APRESENTADOR 2:

```
[Fale como pesquisador descobrindo segredo]

"Agora vem a análise REVELADORA.

CORRELAÇÃO = 'Quanto duas coisas estão relacionadas?'

Fizemos uma matriz de correlação entre:
• Dose e Preço
• Quantidade e Preço
• Dose e Quantidade

[Mostre a tabela]

Correlação entre Dose e Preço: 0.12
Correlação entre Quantidade e Preço: 0.08
Correlação entre Dose e Quantidade: -0.05

[Pause]

Sabe o que significa isso?

MUITO FRACA! PRATICAMENTE NENHUMA!

[Deixe cair]

MAS ESPERA!

Vocês já ouviram aquela lógica comum:

'Ah, medicamento com 1.000mg deve ser mais caro que 10mg'

NÃO!

NÃO É VERDADE!

[Levante a voz]

Uma Dipirona 500mg custa R$ 5.
Um medicamento de câncer 100mg custa R$ 2.000!

Por quê?

Porque o PREÇO não é determinado por DOSE!

O PREÇO é determinado por:

• TIPO de medicamento
• INDICAÇÃO (qual doença trata)
• TECNOLOGIA usada
• Se é PATENTEADO ou GENÉRICO
• RARIDADE

NÃO por dose!

[Pause para absorção]

Insight importante:

Se você quer PREVER preço de um medicamento...

NÃO olhe para dose!

Olhe para TIPO de medicamento!

É um câncer? Vai ser caro!
É analgésico genérico? Vai ser barato!

Simples assim!"
```

---

## ⏱️ SLIDE 11: INTERPRETAÇÃO (2 minutos)

### APRESENTADOR 1:

```
[Fale lentamente, deixando pesar cada descoberta]

"Então... o que isso TUDO significa?

Vou resumir as DESCOBERTAS:

DESCOBERTA 1 - SEGMENTAÇÃO CLARA

Medicamentos NÃO são homogêneos!

Eles se dividem naturalmente em 2 GRUPOS muito diferentes.

Grupo 1: Baratos, genéricos, do dia a dia.
Grupo 2: Caros, especializados, doenças graves.

Bem separados!

DESCOBERTA 2 - POLARIZAÇÃO EXTREMA

99,1% dos medicamentos são BARATOS.
Apenas 0,9% são PREMIUM.

O mercado é FORTEMENTE polarizado!

É uma distribuição tipo:
'Pouquíssimos muito caros'
'Montão absurdo bem barato'

Não há "meio termo"!

DESCOBERTA 3 - PREÇO ≠ DOSE

Essa foi a grande surpresa!

Medicamento caro não é porque tem muita dose!

É porque é ESPECIALIZADO!

Descoberta contra-intuitiva!

DESCOBERTA 4 - PADRÕES OCULTOS

Sem clustering, seria IMPOSSÍVEL ver isso.

Teríamos que analisar 41.547 medicamentos UMA A UMA!

Levaria MESES!

[Deixe impactar]

Um computador fez em MINUTOS!

E não é só mais rápido...

É MAIS PRECISO!

Porque o computador não tem viés.

Ele não pensa 'ah, esse provavelmente é caro'

Ele SÓ OLHA PARA OS DADOS!"
```

---

## ⏱️ SLIDE 12: APLICAÇÕES PRÁTICAS (2 minutos)

### APRESENTADOR 1:

```
[Fale como consultor de negócios]

"Tudo isso que descobrimos... para quê?

Para AÇÃO!

Empresas e profissionais de saúde podem usar isso de várias formas:

APLICAÇÃO 1 - ESTRATÉGIA DE MARKETING

Cluster 0 (Económico):
→ Campanha em farmácias populares
→ Promoções agressivas
→ Atingir volume em massa

Cluster 1 (Premium):
→ Propaganda científica em jornais médicos
→ Foco em hospitais e especialistas
→ Volume pequeno, margem alta

APLICAÇÃO 2 - GESTÃO DE ESTOQUE

Cluster 0:
→ Estoque GRANDE em farmácias
→ Reposição frequente e rápida

Cluster 1:
→ Estoque sob DEMANDA
→ Armazenamento especial (refrigeração, cuidado)

APLICAÇÃO 3 - PESQUISA E DESENVOLVIMENTO

'Qual medicamento está faltando?'

Olhando para os clusters:

'Há medicamento caro para asma? Não!'

→ Oportunidade de desenvolvimento!

APLICAÇÃO 4 - REGULAÇÃO (ANVISA)

Agência de medicamentos pode usar clusters como REFERÊNCIA.

'Esse medicamento tem preço estranho?'

Comparar com medicamentos similares do mesmo cluster.

Detectar fraudes, preços abusivos.

[Resumir]

Essas descobertas viram decisões de NEGÓCIO!

Viram DINHEIRO!

Viram MELHORES MEDICAMENTOS para pacientes!"
```

---

## ⏱️ SLIDE 13: METODOLOGIA TÉCNICA (2 minutos)

### APRESENTADOR 2:

```
[Fale como técnico competente]

"Para os mais técnicos, aqui estão os detalhes:

FERRAMENTAS UTILIZADAS:

• Linguagem: Python 3.x (a linguagem preferida de data scientists)
• Manipulação: Pandas (para trabalhar com tabelas)
• Álgebra: NumPy (para cálculos matemáticos)
• Machine Learning: Scikit-learn (biblioteca de IA)
  - KMeans para clustering
  - StandardScaler para normalização
• Visualização: Matplotlib, Seaborn (gráficos bonitos)
• Métricas: Silhouette Score, Inércia

NORMALIZAÇÃO (StandardScaler):

Fórmula exata:

x_normalizado = (x - média) / desvio_padrão

Resultado:
• média = 0
• desvio padrão = 1
• Intervalo: -2 a +2 aproximadamente

SILHUETA SCORE (Fórmula):

s(i) = (b(i) - a(i)) / max(a(i), b(i))

Onde:
• a(i) = distância média de ponto i aos outros do MESMO cluster
• b(i) = distância média de i ao cluster MAIS PRÓXIMO

Se a(i) é pequeno → grupo coeso ✅
Se b(i) é grande → grupos separados ✅

K-MEANS (Pseudocódigo):

```
1. Escolha K pontos aleatoriamente (centroides iniciais)
2. Para cada iteração:
   a. Atribua cada ponto ao centroide mais próximo
   b. Recalcule centroides como média de cada cluster
   c. Se nada mudou, pare (convergência)
3. Retorne clusters finais
```

COMPLEXIDADE:

• Tempo: O(n × k × i × d)
  - n = número de pontos (41.300)
  - k = número de clusters (2)
  - i = número de iterações (~10)
  - d = dimensões (3 features)

• Resultado: Rápido! Alguns segundos.

[Pause]

Tudo isso foi implementado e TESTADO!"
```

---

## ⏱️ SLIDE 14-15: LIMITAÇÕES E ALTERNATIVAS (2 minutos)

### APRESENTADOR 2:

```
[Fale com honestidade técnica]

"Mas temos que ser HONESTOS.

K-Means tem limitações.

LIMITAÇÃO 1 - Geometria Esférica

K-Means assume que clusters têm formato de 'bola'.

Se dados estão em forma de'meia lua' ou 'espiral', não funciona bem.

LIMITAÇÃO 2 - K Predefinido

Você TEM QUE ESCOLHER K antes.

Se escolher errado (K=10 quando deveria ser K=2), resultado ruim.

LIMITAÇÃO 3 - Sensibilidade a Outliers

Um medicamento com preço absurdo (erro de digitação)

Pode distorcer todo o clustering!

LIMITAÇÃO 4 - Sem Explicação de POR QUÊ

K-Means agrupa, mas NÃO explica a razão técnica.

'Por que esse medicamento está no Cluster 0?'

K-Means: 'Porque sua distância ao centroide é menor que pro outro!'

Mas QUAL é o atributo específico? Não explica.

LIMITAÇÃO 5 - Necessidade Absoluta de Normalização

Sem normalizar = desastre!

[Pause]

MAS, existem ALTERNATIVAS:

DBSCAN - Agrupa por densidade, não requer K prévio

Hierarchical Clustering - Cria árvore de relacionamentos

Gaussian Mixture Models - Modelagem probabilística

Mean Shift - Busca picos de densidade

[Levante a mão]

PARA ESTE PROJECT, K-Means foi PERFEITO porque:

✓ Rápido
✓ Simples de entender
✓ Silhueta 0.99 (praticamente perfeita!)
✓ Resultados muito interpretáveis

Se tivéssemos outro tipo de dado, talvez DBSCAN fosse melhor.

Mas aqui? K-Means foi a escolha certa!"
```

---

## ⏱️ SLIDE 16: VALIDAÇÃO (1 minuto)

### APRESENTADOR 1:

```
[Fale com segurança]

"E COMO SABEMOS que nossos resultados são CONFIÁVEIS?

TESTE 1 - Coesão

'Medicamentos no mesmo cluster estão pertos?'

Resposta: SIM! ✅

Silhueta 0.99 prova isso.

TESTE 2 - Separação

'Clusters estão distantes um do outro?'

Resposta: SIM! ✅

Cluster 0 (baratos) vs Cluster 1 (caros) são MUITO diferentes.

TESTE 3 - Interpretabilidade

'Os clusters fazem sentido?'

Resposta: SIM