var cont = 0;

const url1 = 'http://iot.paparella.com.br/'; // Exemplo de URL, substitua pela real

const getData = () => {

    var data = fetch(url1)
    .then(response => {
      if (!response.ok) {
        throw new Error('Erro na requisição: ' + response.status);
      }
      return response.json(); // Obtém o conteúdo da página como JSON
    })

    console.log(data);

    let filtered = data.filter(comparacao);

    console.log("ioioioio");
    console.log(filtered);
    // cont += 1;

    // if(body.Status)
    //     addChart("grafico_linha", body.valor_sensor);
}

function comparacao(item) {
    return item.nome_aluno == "adrian"
}

const chartIt = (id) => {
    var name
    if(id == "grafico_linha")
        name = 'Potenciômetro'
    // else
    //     name = "Valor"

    //     const ctx = document.getElementById(id);
    //     new Chart(ctx, 
    //     {
    //     type: 'line',
    //     data: 
    //     {   
    //         labels: [],
    //         datasets: [
    //         {
    //         label: name,
    //         data: [],
    //         borderWidth: 1
    //         }]
    //     },
    // });

}

const addChart = (id, newData) => {

    var chart = Chart.getChart(id);
    chart.data.labels.push(newData);
    chart.data.datasets.forEach((dataset) =>
    {
    dataset.data.push(newData); 
    });
    chart.update();
}

chartIt('grafico_linha');

setInterval(() =>
{
    getData();
}, 2000); 
