#include "../include/tarefa.h"

tarefa::tarefa(const std::string& nome, const std::string& descricao, const std::string& data, const std::string& hora, std::string& situacao, int prioridade){
    setNome(nome);
    setDescricao(descricao);
    setData(data);
    setHora(hora);
    setSituacao(situacao);
    setPrioridade(prioridade);
}

tarefa::~tarefa(){};

void tarefa::setNome(std::string n){
    nome = n;
}
std::string tarefa::getNome(void){
    return nome;
}

void tarefa::setDescricao(std::string desc){
    descricao = desc;
}
std::string tarefa::getDescricao(void){
    return descricao;
}

void tarefa::setData(std::string dt){
    data = dt;
}
std::string tarefa::getData(void){
    return data;
}

void tarefa::setNome(std::string hr){
    hora = hr;
}
std::string tarefa::getHora(void){
    return hora;
}

void tarefa::setSituacao(std::string sit){
    situacao = sit;
}
std::string tarefa::getSituacao(void){
    return situacao;
}

void tarefa::setPrioridade(int prio){
    prioridade = prio;
}
int tarefa::getPrioridade(void){
    return prioridade;
}